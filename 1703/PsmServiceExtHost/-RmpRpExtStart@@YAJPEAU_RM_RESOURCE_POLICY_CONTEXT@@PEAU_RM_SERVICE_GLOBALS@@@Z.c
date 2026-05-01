/*
 * XREFs of ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001CC3C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001CB20 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     IsRmRpsHostEmptyNotificationPresent @ 0x180021414 (IsRmRpsHostEmptyNotificationPresent.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtStart(struct _RM_RESOURCE_POLICY_CONTEXT *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbp
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rdx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // [rsp+30h] [rbp-98h] BYREF
  __int64 v13; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v14[48]; // [rsp+40h] [rbp-88h] BYREF
  int (__fastcall *v15)(struct _RM_ACTIVATOR *, unsigned __int64, struct _RM_RESOURCE_LIMITS *); // [rsp+70h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-50h] BYREF
  int *v17; // [rsp+98h] [rbp-30h]
  __int64 v18; // [rsp+A0h] [rbp-28h]

  v2 = RmSvcGlobals;
  v4 = 0;
  if ( (unsigned __int8)IsRmRpsHostEmptyNotificationPresent(a1, a2) )
  {
    v5 = operator new(0x18uLL);
    if ( v5 )
    {
      v5[1] = v2;
      *v5 = &RmpRpExtResourceManagerThunk::`vftable';
      *((_DWORD *)v5 + 4) = 1;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      memset_0(v14, 0, 0x38uLL);
      v15 = RmpRpExtSetHostLimit;
      v12 = RmRpsInitialize(v14, v5, &v13);
      if ( v12 < 0 )
      {
        if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v6, 1uLL) )
        {
          v18 = 4LL;
          v17 = &v12;
          TlgWrite(v9, &unk_18003F43C, v10, v11, 3u, &pData);
        }
        v4 = -1073741823;
      }
      else
      {
        v7 = v13;
        *((_DWORD *)a1 + 2) |= 1u;
        *(_QWORD *)a1 = v7;
      }
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
