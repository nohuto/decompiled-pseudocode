/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140007E90
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x140001D84 (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140005FA0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140016124 (_TlgKeywordOn.c)
 *     ?GetLatency@CProcessNode@@UEAAJPEA_J@Z @ 0x1400172C0 (-GetLatency@CProcessNode@@UEAAJPEA_J@Z.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  CProcessNode *v4; // rbx
  __int64 (__fastcall *v5)(CProcessNode *__hidden, __int64 *); // rax
  CProcessNode *v6; // rcx
  int Latency; // eax
  __int64 v8; // rdx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // r10
  __int64 v14; // [rsp+38h] [rbp-99h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  double v16; // [rsp+48h] [rbp-89h] BYREF
  __int64 *v17; // [rsp+50h] [rbp-81h]
  _DWORD v18[2]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v19; // [rsp+60h] [rbp-71h]
  void *v20; // [rsp+68h] [rbp-69h] BYREF
  int v21; // [rsp+70h] [rbp-61h]
  int v22; // [rsp+74h] [rbp-5Dh]
  void *v23; // [rsp+78h] [rbp-59h]
  int v24; // [rsp+80h] [rbp-51h]
  int v25; // [rsp+84h] [rbp-4Dh]
  __int64 v26; // [rsp+88h] [rbp-49h]
  __int64 v27; // [rsp+90h] [rbp-41h]
  double *v28; // [rsp+98h] [rbp-39h]
  __int64 v29; // [rsp+A0h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-9h]
  __int64 v32; // [rsp+D0h] [rbp-1h]
  __int64 *v33; // [rsp+D8h] [rbp+7h]
  __int64 v34; // [rsp+E0h] [rbp+Fh]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v17 = a2;
  v3 = 0LL;
  if ( !v2 )
  {
    *a2 = 0LL;
    return 0LL;
  }
  do
  {
    v4 = (CProcessNode *)v2[2];
    v2 = (_QWORD *)*v2;
    v5 = *(__int64 (__fastcall **)(CProcessNode *__hidden, __int64 *))(*(_QWORD *)v4 + 56LL);
    if ( v5 == CAPOProcessNode::GetLatency )
    {
      v6 = *(CProcessNode **)(*((_QWORD *)v4 + 4) + 40LL);
      v5 = *(__int64 (__fastcall **)(CProcessNode *__hidden, __int64 *))(*(_QWORD *)v6 + 32LL);
LABEL_4:
      Latency = v5(v6, &v15);
      goto LABEL_5;
    }
    v6 = v4;
    if ( v5 != CProcessNode::GetLatency )
      goto LABEL_4;
    Latency = CProcessNode::GetLatency(v4, &v15);
LABEL_5:
    if ( Latency < 0 )
    {
      if ( *((_DWORD *)v4 + 10) == 2
        && *(_DWORD *)(*((_QWORD *)v4 + 4) + 4LL)
        && (unsigned int)dword_1400540B0 > 2
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1400540B0, 0x200000000000uLL) )
      {
        v32 = 16LL;
        v31 = v13 + 8;
        v33 = &v14;
        LODWORD(v14) = (_DWORD)v12;
        v34 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1400540B0, &unk_140045CFD, v11, v12, 4u, &pData);
      }
    }
    else
    {
      v3 += v15;
      if ( *((_DWORD *)v4 + 10) == 2 )
      {
        v8 = *((_QWORD *)v4 + 4);
        if ( *(_DWORD *)(v8 + 4) )
        {
          if ( (unsigned int)dword_1400540B0 > 4
            && (qword_1400540C0 & 0x200000000000LL) != 0
            && (qword_1400540C8 & 0x200000000000LL) == qword_1400540C8 )
          {
            v27 = 16LL;
            v29 = 8LL;
            v26 = v8 + 8;
            v28 = &v16;
            v16 = (double)(int)v15 / 10000000.0;
            v18[1] = 4;
            v20 = off_1400540B8;
            v18[0] = ((unsigned int)&unk_140045CCC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v19 = 0x200000000000LL;
            v21 = *(unsigned __int16 *)off_1400540B8;
            v23 = &unk_140045CD7;
            v22 = 2;
            v24 = 37;
            v25 = 1;
            EtwEventWriteTransfer(qword_1400540D0, v18, 0LL, 0LL, 4, &v20);
          }
        }
      }
    }
  }
  while ( v2 );
  *v17 = v3;
  return 0LL;
}
