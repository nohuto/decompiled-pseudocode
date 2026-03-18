/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00D6630
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008B754 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0006244 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  __int64 v5; // r14
  const struct _LUID *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rsi
  DXGADAPTER *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  ADAPTER_DISPLAY *v16; // r13
  int v17; // ebp
  int v18; // r11d
  __int64 v19; // rcx
  char *v20; // rbx
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // esi
  __int64 i; // rdx
  _QWORD *v27; // rax
  unsigned int v28; // eax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v33[136]; // [rsp+30h] [rbp-88h] BYREF
  signed __int64 v35; // [rsp+D0h] [rbp+18h]

  v5 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7, &v32);
  v11 = v9;
  if ( !v9 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v15) = -1073741811;
    v29[3] = v7->HighPart;
    v29[4] = v7->LowPart;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v15;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v9, 0LL);
  DXGADAPTER::ReleaseReference(v12);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33);
  v15 = v13;
  if ( v13 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v14);
  }
  else
  {
    v16 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 266);
    if ( v16 )
    {
      v17 = 0;
      v15 = 0LL;
      v18 = -1;
      if ( (_DWORD)v5 )
      {
        do
        {
          v19 = *(unsigned int *)&a4[4 * v15];
          if ( (_DWORD)v19 != -1 )
          {
            if ( (unsigned int)v19 >= *((_DWORD *)v16 + 20) )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdError(v19);
              v30 = *(unsigned int *)&a4[4 * v15];
              LODWORD(v15) = -1073741811;
              v27[3] = v30;
              v27[4] = v7->HighPart;
              v27[5] = v7->LowPart;
              v27[6] = -1073741811LL;
              goto LABEL_26;
            }
            v17 |= 1 << v19;
          }
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < (unsigned int)v5 );
        v20 = a4;
        v35 = a3 - a4;
        v21 = v5;
        do
        {
          if ( *(_DWORD *)v20 == v18 )
          {
            v22 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v16, *(_DWORD *)&v20[v35]);
            v24 = v22;
            if ( v22 != v18 )
            {
              if ( v22 >= *((_DWORD *)v16 + 20) )
              {
                v31 = WdLogNewEntry5_WdAssertion(v23);
                *(_QWORD *)(v31 + 24) = 6937LL;
                WdLogEvent5_WdAssertion(v31);
                v18 = -1;
              }
              if ( ((1 << v24) & v17) == 0 )
              {
                *(_DWORD *)v20 = v24;
                v17 |= 1 << v24;
              }
            }
          }
          v20 += 4;
          --v21;
        }
        while ( v21 );
        v7 = a1;
      }
      v14 = 0LL;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)&a4[4 * i] == v18 )
        {
          v28 = *((_DWORD *)v16 + 20);
          while ( (unsigned int)v14 < v28 && _bittest(&v17, v14) )
            v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= v28 )
            goto LABEL_24;
          *(_DWORD *)&a4[4 * i] = v14;
          v17 |= 1 << v14;
          v14 = (unsigned int)(v14 + 1);
        }
      }
      LODWORD(v15) = 0;
      goto LABEL_20;
    }
LABEL_24:
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v15 = -1073741811LL;
  }
  v27[3] = v7->HighPart;
  v27[4] = v7->LowPart;
  v27[5] = v15;
LABEL_26:
  WdLogEvent5_WdError(v27);
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  return (unsigned int)v15;
}
