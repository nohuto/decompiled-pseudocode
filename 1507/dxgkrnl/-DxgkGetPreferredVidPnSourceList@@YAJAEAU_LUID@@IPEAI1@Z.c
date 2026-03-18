/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z @ 0x1C006223C
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064D90 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0020268 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
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
  __int64 i; // rdx
  _QWORD *v23; // rax
  unsigned int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // esi
  __int64 v33; // rax
  _BYTE v34[120]; // [rsp+20h] [rbp-78h] BYREF
  signed __int64 v36; // [rsp+B0h] [rbp+18h]

  v5 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7);
  v11 = v9;
  if ( !v9 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v14) = -1073741811;
    v25[3] = v7->HighPart;
    v25[4] = v7->LowPart;
    v25[5] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v9, 0LL);
  DXGADAPTER::ReleaseReference(v11);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
  v14 = v12;
  if ( v12 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  }
  else
  {
    v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 247);
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
            if ( (unsigned int)v18 >= *((_DWORD *)v15 + 20) )
            {
              v23 = (_QWORD *)WdLogNewEntry5_WdError(v18);
              v26 = *(unsigned int *)&a4[4 * v14];
              LODWORD(v14) = -1073741811;
              v23[3] = v26;
              v23[4] = v7->HighPart;
              v23[5] = v7->LowPart;
              v23[6] = -1073741811LL;
              goto LABEL_21;
            }
            v16 |= 1 << v18;
          }
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < (unsigned int)v5 );
        v19 = a4;
        v36 = a3 - a4;
        v20 = v5;
        do
        {
          if ( *(_DWORD *)v19 == v17 )
          {
            v27 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v15, *(_DWORD *)&v19[v36]);
            v32 = v27;
            if ( v27 != v17 )
            {
              if ( v27 >= *((_DWORD *)v15 + 20) )
              {
                v33 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
                *(_QWORD *)(v33 + 24) = 6176LL;
                WdLogEvent5_WdAssertion(v33);
                v17 = -1;
              }
              if ( ((1 << v32) & v16) == 0 )
              {
                *(_DWORD *)v19 = v32;
                v16 |= 1 << v32;
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
          v24 = *((_DWORD *)v15 + 20);
          while ( (unsigned int)v13 < v24 && _bittest(&v16, v13) )
            v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v24 )
            goto LABEL_19;
          *(_DWORD *)&a4[4 * i] = v13;
          v16 |= 1 << v13;
          v13 = (unsigned int)(v13 + 1);
        }
      }
      LODWORD(v14) = 0;
      goto LABEL_17;
    }
LABEL_19:
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14 = -1073741811LL;
  }
  v23[3] = v7->HighPart;
  v23[4] = v7->LowPart;
  v23[5] = v14;
LABEL_21:
  WdLogEvent5_WdError(v23);
LABEL_17:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  return (unsigned int)v14;
}
