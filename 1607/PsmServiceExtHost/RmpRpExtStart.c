/*
 * XREFs of RmpRpExtStart @ 0x18001E870
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001E760 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     IsRmRpsHostEmptyNotificationPresent @ 0x1800205BC (IsRmRpsHostEmptyNotificationPresent.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtStart(__int64 a1)
{
  struct _RM_SERVICE_GLOBALS *v1; // rbp
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rdx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v13[48]; // [rsp+40h] [rbp-78h] BYREF
  int (__fastcall *v14)(__int64, __int64, struct _RM_RESOURCE_LIMITS *); // [rsp+70h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-40h] BYREF
  int *v16; // [rsp+98h] [rbp-20h]
  __int64 v17; // [rsp+A0h] [rbp-18h]

  v1 = RmSvcGlobals;
  v3 = 0;
  if ( (unsigned __int8)IsRmRpsHostEmptyNotificationPresent() )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[1] = v1;
      *v4 = &RmpRpExtResourceManagerThunk::`vftable';
      *((_DWORD *)v4 + 4) = 1;
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      memset_0(v13, 0, 0x38uLL);
      v14 = RmpRpExtSetHostLimit;
      v11 = RmRpsInitialize(v13, v4, &v12);
      if ( v11 < 0 )
      {
        if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 1uLL) )
        {
          v17 = 4LL;
          v16 = &v11;
          TlgWrite(v8, &unk_18003EDF7, v9, v10, 3u, &pData);
        }
        v3 = -1073741823;
      }
      else
      {
        v6 = v12;
        *(_DWORD *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v6;
      }
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
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
  return v3;
}
