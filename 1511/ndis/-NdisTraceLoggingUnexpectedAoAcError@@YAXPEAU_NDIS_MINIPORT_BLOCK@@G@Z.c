/*
 * XREFs of ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C006E5A4
 * Callers:
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00683E8 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingUnexpectedAoAcError(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = v1 + 4064;
      v4 = (unsigned __int16)v3;
      v9 = &v4;
      v7 = 16;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C007326C, v2, v3, 4u, &pData);
    }
  }
}
