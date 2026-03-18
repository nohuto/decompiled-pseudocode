/*
 * XREFs of _SetUserObjectInformation @ 0x1C01D2024
 * Callers:
 *     NtUserSetObjectInformation @ 0x1C0220590 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  ULONG v10; // ecx
  POBJECT_TYPE *ObjectType; // rsi
  ACCESS_MASK v12; // edx
  __int64 v13; // r8
  PVOID v14; // rdi
  int v15; // ecx
  _BYTE v17[4]; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+34h] [rbp-64h]
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  PVOID v20; // [rsp+48h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-48h] BYREF
  PVOID v22; // [rsp+60h] [rbp-38h]
  _DWORD *v23; // [rsp+68h] [rbp-30h]

  v8 = 1;
  v18 = 1;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(Object);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v12 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        v10 = 1;
        goto LABEL_18;
      }
      v12 = 128;
    }
    v9 = ObReferenceObjectByHandle(Handle, v12, (POBJECT_TYPE)ObjectType, 1, &v20, &HandleInformation);
    v14 = v20;
    v22 = v20;
    if ( v9 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          v23 = a3;
          v17[0] = *a3 != 0;
          v17[1] = HandleInformation.HandleAttributes & 1;
          LOBYTE(v13) = 1;
          ObSetHandleAttributes(Handle, v17, v13);
          if ( ObjectType == ExDesktopObjectType )
          {
            v8 = SetHandleFlag(Handle, 0LL, a3[2] & 1);
            v18 = v8;
            if ( !v8 )
              UserSetLastError(8);
          }
          goto LABEL_16;
        }
        v15 = 13;
      }
      else
      {
        v15 = 87;
      }
      UserSetLastError(v15);
      v8 = 0;
      v18 = 0;
LABEL_16:
      ObfDereferenceObject(v14);
      return v8;
    }
  }
  v10 = RtlNtStatusToDosError(v9);
LABEL_18:
  UserSetLastError(v10);
  return 0LL;
}
