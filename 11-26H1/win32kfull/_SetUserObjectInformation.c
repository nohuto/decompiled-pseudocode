/*
 * XREFs of _SetUserObjectInformation @ 0x14029A650
 * Callers:
 *     NtUserSetObjectInformation @ 0x1402BD320 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, void *a3, unsigned int a4)
{
  unsigned int v8; // edi
  int v9; // eax
  PVOID v10; // r15
  POBJECT_TYPE *ObjectType; // rsi
  ACCESS_MASK v12; // edx
  int v13; // ecx
  __int64 v14; // r8
  __int16 v16; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-74h]
  PVOID Object[3]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+58h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h]
  int v23; // [rsp+70h] [rbp-38h]

  v8 = 1;
  HandleInformation = 0LL;
  v16 = 0;
  Object[0] = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, Object, 0LL);
  v10 = Object[0];
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object[0]);
    ObfDereferenceObject(v10);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v12 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        UserSetLastError(1);
        return 0LL;
      }
      v12 = 128;
    }
    Object[0] = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, v12, (POBJECT_TYPE)ObjectType, 1, Object, &HandleInformation);
    if ( v9 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          v19 = 0LL;
          v20 = 0;
          RtlCopyFromUser(&v19, a3, 0xCuLL);
          v22 = v19;
          v23 = v20;
          LOBYTE(v16) = (_DWORD)v19 != 0;
          HIBYTE(v16) = HandleInformation.HandleAttributes & 1;
          LOBYTE(v14) = 1;
          ObSetHandleAttributes(Handle, &v16, v14);
          if ( ObjectType == ExDesktopObjectType )
          {
            v8 = SetHandleFlag(Handle, 0LL);
            v17 = v8;
            if ( !v8 )
              UserSetLastError(8);
          }
          goto LABEL_16;
        }
        v13 = 13;
      }
      else
      {
        v13 = 87;
      }
      UserSetLastError(v13);
      v8 = 0;
      v17 = 0;
LABEL_16:
      ObfDereferenceObject(Object[0]);
      return v8;
    }
  }
  SetLastNtError(v9);
  return 0LL;
}
