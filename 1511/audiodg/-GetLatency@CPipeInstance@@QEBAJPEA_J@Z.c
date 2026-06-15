/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000C600
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003430 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x14000362C (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x1400066A0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     ?GetLatency@CProcessNode@@UEAAJPEA_J@Z @ 0x140017C80 (-GetLatency@CProcessNode@@UEAAJPEA_J@Z.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     _TlgWrite @ 0x140027EFC (_TlgWrite.c)
 */

__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  _QWORD *v2; // r14
  __int64 v3; // r15
  CProcessNode *v4; // rsi
  __int64 (__fastcall *v5)(CProcessNode *__hidden, __int64 *); // rbx
  int Latency; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // ecx
  __int64 v10; // rcx
  const void *v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  double v17; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  __int64 v20; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  double *v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = 0LL;
  v18 = a2;
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
      Latency = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)v4 + 4) + 40LL) + 32LL))(
                  *(_QWORD *)(*((_QWORD *)v4 + 4) + 40LL),
                  &v16);
    }
    else if ( v5 == CProcessNode::GetLatency )
    {
      Latency = CProcessNode::GetLatency(v4, &v16);
    }
    else
    {
      Latency = v5(v4, &v16);
    }
    v9 = Latency;
    if ( Latency < 0 )
    {
      if ( *((_DWORD *)v4 + 10) == 2 )
      {
        v14 = *((_QWORD *)v4 + 4);
        if ( *(_DWORD *)(v14 + 4) )
        {
          if ( hProvider > 2u
            && (qword_1400552A0 & 0x200000000000LL) != 0
            && (qword_1400552A8 & 0x200000000000LL) == qword_1400552A8 )
          {
            LODWORD(v17) = v9;
            v20 = v14 + 8;
            v13 = &unk_140045612;
            v23 = 4LL;
            goto LABEL_30;
          }
        }
      }
    }
    else
    {
      v3 += v16;
      if ( *((_DWORD *)v4 + 10) == 2 )
      {
        v10 = *((_QWORD *)v4 + 4);
        if ( *(_DWORD *)(v10 + 4) )
        {
          if ( hProvider > 4u
            && (qword_1400552A0 & 0x200000000000LL) != 0
            && (qword_1400552A8 & 0x200000000000LL) == qword_1400552A8 )
          {
            v23 = 8LL;
            v20 = v10 + 8;
            v13 = &unk_1400455E1;
            v17 = (double)(int)v16 / 10000000.0;
LABEL_30:
            v22 = &v17;
            v21 = 16LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, v13, v7, v8, 4u, &pData);
          }
        }
      }
    }
  }
  while ( v2 );
  *v18 = v3;
  return 0LL;
}
