/*
 * XREFs of ?LogMPCGamepadInputStealing_@ISMTracing@@QEAAX_N@Z @ 0x18004A678
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z @ 0x18004A7DC (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCGamepadInputStealing_(ISMTracing *this, char a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  char v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      v7 = 0;
      v5 = &v8;
      v6 = 1;
      TlgWrite((TraceLoggingHProvider)v3, &unk_1800B977B, 0LL, 0LL, 3u, &pData);
    }
  }
}
