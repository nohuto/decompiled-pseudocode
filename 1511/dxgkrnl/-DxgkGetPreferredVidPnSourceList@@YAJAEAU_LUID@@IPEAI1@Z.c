/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z @ 0x1C00C05D4
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A33EC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C00078FC (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  __int64 v5; // r14
  struct _LUID *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  DXGADAPTER *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  ADAPTER_DISPLAY *v15; // r13
  int v16; // ebp
  int v17; // r11d
  __int64 v18; // rcx
  char *v19; // rbx
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 i; // rdx
  _QWORD *v26; // rax
  unsigned int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  _BYTE v31[120]; // [rsp+20h] [rbp-78h] BYREF
  signed __int64 v33; // [rsp+B0h] [rbp+18h]

  v5 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7);
  v11 = v9;
  if ( !v9 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v14) = -1073741811;
    v28[3] = v7->HighPart;
    v28[4] = v7->LowPart;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v9, 0LL);
  DXGADAPTER::ReleaseReference(v11);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
  v14 = v12;
  if ( v12 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  }
  else
  {
    v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 248);
    if ( v15 )
    {
      v16 = 0;
      v14 = 0LL;
      v17 = -1;
      if ( (_DWORD)v5 )
      {
        do
        {
          v18 = *(unsigned int *)&a4[4 * v14];
          if ( (_DWORD)v18 != -1 )
          {
            if ( (unsigned int)v18 >= *((_DWORD *)v15 + 26) )
            {
              v26 = (_QWORD *)WdLogNewEntry5_WdError(v18);
              v29 = *(unsigned int *)&a4[4 * v14];
              LODWORD(v14) = -1073741811;
              v26[3] = v29;
              v26[4] = v7->HighPart;
              v26[5] = v7->LowPart;
              v26[6] = -1073741811LL;
              goto LABEL_24;
            }
            v16 |= 1 << v18;
          }
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < (unsigned int)v5 );
        v19 = a4;
        v33 = a3 - a4;
        v20 = v5;
        do
        {
          if ( *(_DWORD *)v19 == v17 )
          {
            v21 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v15, *(_DWORD *)&v19[v33]);
            v23 = v21;
            if ( v21 != v17 )
            {
              if ( v21 >= *((_DWORD *)v15 + 26) )
              {
                v30 = WdLogNewEntry5_WdAssertion(v22);
                *(_QWORD *)(v30 + 24) = 6594LL;
                WdLogEvent5_WdAssertion(v30);
                v17 = -1;
              }
              if ( ((1 << v23) & v16) == 0 )
              {
                *(_DWORD *)v19 = v23;
                v16 |= 1 << v23;
              }
            }
          }
          v19 += 4;
          --v20;
        }
        while ( v20 );
        v7 = a1;
      }
      v13 = 0LL;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)&a4[4 * i] == v17 )
        {
          v27 = *((_DWORD *)v15 + 26);
          while ( (unsigned int)v13 < v27 && _bittest(&v16, v13) )
            v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v27 )
            goto LABEL_22;
          *(_DWORD *)&a4[4 * i] = v13;
          v16 |= 1 << v13;
          v13 = (unsigned int)(v13 + 1);
        }
      }
      LODWORD(v14) = 0;
      goto LABEL_20;
    }
LABEL_22:
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14 = -1073741811LL;
  }
  v26[3] = v7->HighPart;
  v26[4] = v7->LowPart;
  v26[5] = v14;
LABEL_24:
  WdLogEvent5_WdError(v26);
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  return (unsigned int)v14;
}
