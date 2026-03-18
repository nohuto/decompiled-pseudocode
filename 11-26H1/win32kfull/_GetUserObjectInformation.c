/*
 * XREFs of _GetUserObjectInformation @ 0x14005A700
 * Callers:
 *     EditionGetUserObjectInformationEntryPoint @ 0x14005A550 (EditionGetUserObjectInformationEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     CheckHandleFlag @ 0x1401BB438 (CheckHandleFlag.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _QWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // edi
  NTSTATUS v10; // eax
  PVOID v11; // r15
  POBJECT_TYPE *ObjectType; // r13
  ACCESS_MASK v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD ***v16; // r15
  int v17; // r14d
  int v18; // r14d
  const void **v19; // r14
  size_t v20; // r8
  int v21; // ecx
  int v22; // r14d
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  PVOID v26; // r14
  void *v27; // rcx
  ULONG v28; // eax
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v32; // [rsp+58h] [rbp-30h]

  v7 = 1;
  v8 = 0;
  v9 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  v11 = Object;
  if ( v10 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(v11);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v13 = 2;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
LABEL_49:
        UserSetLastError(1);
        return 0LL;
      }
      v13 = 1;
    }
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_49;
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &Object, &HandleInformation);
    v16 = (_QWORD ***)Object;
    v32 = Object;
    if ( v10 >= 0 )
    {
      v17 = a2 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( ObQueryNameInfo(Object) )
            v19 = (const void **)(ObQueryNameInfo(v16) + 8);
          else
            v19 = 0LL;
LABEL_11:
          if ( v19 )
          {
            v20 = *(unsigned __int16 *)v19;
            v9 = v20 + 2;
            if ( (int)v20 + 2 <= a4 )
            {
              memmove(a3, v19[1], v20);
              *(_WORD *)((char *)a3 + *(unsigned __int16 *)v19) = 0;
LABEL_44:
              *a5 = v9;
              ObfDereferenceObject(v16);
              return v7;
            }
            goto LABEL_14;
          }
LABEL_16:
          v9 = 0;
          goto LABEL_44;
        }
        v22 = v18 - 1;
        if ( !v22 )
        {
          v19 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 != 2 || ObjectType != ExDesktopObjectType || !(unsigned int)IsCurrentProcessDwm() )
              {
                v21 = 87;
                goto LABEL_15;
              }
              v9 = 8;
              if ( a4 >= 8 )
              {
                *a3 = **v16[1];
                goto LABEL_44;
              }
            }
            else
            {
              v9 = 4;
              if ( a4 >= 4 )
              {
                LOBYTE(v8) = v16 == *(_QWORD ****)(W32GetUserSessionState(v15, v14) + 19176);
                *(_DWORD *)a3 = v8;
                goto LABEL_44;
              }
            }
          }
          else
          {
            v9 = 4;
            if ( a4 >= 4 )
            {
              *(_DWORD *)a3 = *((_DWORD *)Object + 36) >> 10;
              goto LABEL_44;
            }
          }
        }
        else
        {
          v26 = Object;
          if ( ObjectType != (POBJECT_TYPE *)ExWindowStationObjectType )
            v26 = (PVOID)*((_QWORD *)Object + 5);
          v27 = (void *)*((_QWORD *)v26 + 20);
          if ( !v27 )
            goto LABEL_16;
          v28 = RtlLengthSid(v27);
          v9 = v28;
          if ( v28 <= a4 )
          {
            memmove(a3, *((const void **)v26 + 20), v28);
            goto LABEL_44;
          }
        }
      }
      else
      {
        v9 = 12;
        if ( a4 >= 0xC )
        {
          *(_DWORD *)a3 = (HandleInformation.HandleAttributes >> 1) & 1;
          *(_QWORD *)((char *)a3 + 4) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL) )
              *((_DWORD *)a3 + 2) |= 1u;
          }
          else if ( (*((_DWORD *)Object + 8) & 4) == 0 )
          {
            *((_DWORD *)a3 + 2) = 1;
          }
          goto LABEL_44;
        }
      }
LABEL_14:
      v21 = 122;
LABEL_15:
      UserSetLastError(v21);
      v7 = 0;
      goto LABEL_44;
    }
  }
  SetLastNtError((unsigned int)v10);
  return 0LL;
}
