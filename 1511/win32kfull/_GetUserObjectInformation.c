/*
 * XREFs of _GetUserObjectInformation @ 0x1C004C060
 * Callers:
 *     NtUserGetObjectInformation @ 0x1C004BEE0 (NtUserGetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CheckHandleFlag @ 0x1C0064898 (CheckHandleFlag.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // eax
  POBJECT_TYPE *ObjectType; // r13
  ACCESS_MASK v13; // edx
  _DWORD *v14; // r15
  int v15; // r14d
  int v16; // r14d
  const void **v17; // r14
  size_t v18; // r8
  __int64 v19; // rcx
  int v20; // r14d
  int v21; // r14d
  int v22; // r14d
  const void **v23; // r14
  void *v24; // rcx
  ULONG v25; // eax
  __int64 v27; // rcx
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  PVOID v29; // [rsp+50h] [rbp-68h] BYREF
  PVOID v30; // [rsp+58h] [rbp-60h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h]
  _DWORD *v33; // [rsp+78h] [rbp-40h]

  v8 = 1;
  v9 = 0;
  v10 = 0;
  v11 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_44;
  ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
  ObfDereferenceObject(Object);
  if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v13 = 2;
    goto LABEL_5;
  }
  if ( ObjectType == ExDesktopObjectType )
  {
    v13 = 1;
LABEL_5:
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_43;
    v11 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v29, &HandleInformation);
    v14 = v29;
    v32 = v29;
    if ( v11 >= 0 )
    {
      v15 = a2 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          if ( ObQueryNameInfo(v29) )
            v17 = (const void **)(ObQueryNameInfo(v14) + 8);
          else
            v17 = 0LL;
LABEL_11:
          if ( v17 )
          {
            v18 = *(unsigned __int16 *)v17;
            v10 = v18 + 2;
            if ( (int)v18 + 2 <= a4 )
            {
              memmove(a3, v17[1], v18);
              *(_WORD *)((char *)a3 + *(unsigned __int16 *)v17) = 0;
LABEL_40:
              *a5 = v10;
              ObfDereferenceObject(v14);
              return v8;
            }
            goto LABEL_14;
          }
LABEL_37:
          v10 = 0;
          goto LABEL_40;
        }
        v20 = v16 - 1;
        if ( !v20 )
        {
          v17 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
            {
              v19 = 87LL;
              goto LABEL_15;
            }
            v10 = 4;
            if ( a4 >= 4 )
            {
              LOBYTE(v9) = v29 == (PVOID)grpdeskRitInput;
              *a3 = v9;
              goto LABEL_40;
            }
          }
          else
          {
            v10 = 4;
            if ( a4 >= 4 )
            {
              *a3 = *((_DWORD *)v29 + 32) >> 10;
              goto LABEL_40;
            }
          }
        }
        else
        {
          if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
          {
            v23 = (const void **)v29;
            v30 = v29;
          }
          else
          {
            v23 = (const void **)*((_QWORD *)v29 + 3);
            v30 = v23;
          }
          v24 = (void *)v23[20];
          if ( !v24 )
            goto LABEL_37;
          v25 = RtlLengthSid(v24);
          v10 = v25;
          if ( v25 <= a4 )
          {
            memmove(a3, v23[20], v25);
            goto LABEL_40;
          }
        }
      }
      else
      {
        v10 = 12;
        if ( a4 >= 0xC )
        {
          v33 = a3;
          *a3 = (LOBYTE(HandleInformation.HandleAttributes) >> 1) & 1;
          *(_QWORD *)(a3 + 1) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL) )
              a3[2] |= 1u;
          }
          else if ( (v14[8] & 4) == 0 )
          {
            a3[2] = 1;
          }
          goto LABEL_40;
        }
      }
LABEL_14:
      v19 = 122LL;
LABEL_15:
      UserSetLastError(v19);
      v8 = 0;
      goto LABEL_40;
    }
LABEL_44:
    v27 = RtlNtStatusToDosError(v11);
    goto LABEL_45;
  }
LABEL_43:
  v27 = 1LL;
LABEL_45:
  UserSetLastError(v27);
  return 0LL;
}
