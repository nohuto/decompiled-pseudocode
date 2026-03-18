/*
 * XREFs of ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B94FC
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C00B93A0 (DxgkAugmentCdsj.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C008BB94 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z @ 0x1C008BCA4 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B68E0 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00B94A4 (-Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D5604 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00D5BCC (-_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@CCD_BTL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00D96F0 (-_PreVerify@CDS_JOURNAL@CCD_BTL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@CCD_BTL@@AEAAJAEBU_ENTRY@12@@Z @ 0x1C01AE8BC (-_PurgeRelatedEntries@CDS_JOURNAL@CCD_BTL@@AEAAJAEBU_ENTRY@12@@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::Augment(CCD_BTL::CDS_JOURNAL *this, struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v5; // rcx
  CCD_BTL *v6; // rcx
  __int64 v7; // rbx
  struct DXGADAPTER *v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  _OWORD *v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v19; // rax
  struct DXGADAPTER *v20; // r8
  __int64 v21; // rcx
  CCD_BTL *v22; // rcx
  bool v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31[12]; // [rsp+20h] [rbp-E0h] BYREF
  void *v32[8]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v33; // [rsp+C0h] [rbp-40h]
  _QWORD v34[12]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CCD_BTL::CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v32, 8u, 0);
  CCD_BTL::Global(v5);
  LODWORD(v7) = CCD_BTL::_FillTopology(v6, v32, a2, 64);
  if ( (int)v7 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v7) = -1071774974;
    }
    else
    {
      v10 = (_QWORD *)((char *)this + 24);
      if ( (_QWORD *)*v10 != v10 && *(_DWORD *)this == 1 )
      {
        LODWORD(v7) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v32, this, (__int64)v8, v9);
        if ( (_DWORD)v7 == -1073741266 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v8, v18);
          v19[4] = v32;
          v19[3] = this;
          v19[5] = v33;
          WdLogEvent5_WdWarning(v19);
          LODWORD(v7) = CCD_BTL::CDS_JOURNAL::Purge(this);
        }
      }
      v11 = v33;
      *(_OWORD *)this = *v33;
      *((_DWORD *)this + 4) = *((_DWORD *)v11 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v34[0] = 0LL;
        v34[1] = 0LL;
        *(_QWORD *)((char *)&v34[2] + 4) = 0LL;
        *(_QWORD *)((char *)&v34[3] + 4) = 0LL;
        *(_QWORD *)((char *)&v34[4] + 4) = 0LL;
        memset((char *)&v34[5] + 4, 0, 0x28uLL);
        CCD_BTL::CDS_JOURNAL::_FillEntry((struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v34, a2, v20);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v31, 8u, 0);
        CCD_BTL::Global(v21);
        LODWORD(v7) = CCD_BTL::_FillTopology(v22, v31, a2, 15);
        if ( (int)v7 >= 0 )
        {
          v24 = CCD_BTL::CDS_JOURNAL::_CommitEntry(
                  (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v34,
                  (struct CCD_TOPOLOGY *)v31,
                  v23);
          v7 = v24;
          if ( v24 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v31),
                v28 = CCD_TOPOLOGY::Persist((struct _D3DKMT_GETPATHSMODALITY **)v31, 1LL, v26, v27),
                v7 = v28,
                v28 < 0) )
          {
            v29 = WdLogNewEntry5_WdError(v25);
            *(_QWORD *)(v29 + 24) = v7;
            *(_QWORD *)(v29 + 32) = v31;
            *(void **)(v29 + 40) = v31[8];
            WdLogEvent5_WdError(v29);
          }
          else
          {
            LODWORD(v7) = CCD_BTL::CDS_JOURNAL::_PurgeRelatedEntries(
                            this,
                            (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v34);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v31);
        goto LABEL_14;
      }
      v12 = (_DWORD *)*v10;
      if ( (_QWORD *)*v10 == v10 )
        goto LABEL_8;
      do
      {
        v14 = v12;
        if ( v12[8] == *((_DWORD *)a2 + 4) && v12[5] == *((_DWORD *)a2 + 1) && v12[6] == *((_DWORD *)a2 + 2) )
          break;
        v12 = *(_DWORD **)v12;
      }
      while ( v12 != (_DWORD *)v10 );
      if ( v12 == (_DWORD *)v10 )
      {
LABEL_8:
        v14 = operator new(0x58uLL, 0x63644356u, PagedPool);
        if ( v14 )
        {
          *v14 = 0LL;
          v14[1] = 0LL;
          *(_QWORD *)((char *)v14 + 20) = 0LL;
          *(_QWORD *)((char *)v14 + 28) = 0LL;
          *(_QWORD *)((char *)v14 + 36) = 0LL;
          memset((char *)v14 + 44, 0, 0x28uLL);
        }
        else
        {
          v14 = 0LL;
        }
        if ( !v14 )
        {
          v30 = WdLogNewEntry5_WdLowResource(v13);
          *(_QWORD *)(v30 + 24) = 88LL;
          WdLogEvent5_WdLowResource(v30);
          LODWORD(v7) = -1073741801;
          goto LABEL_14;
        }
        v15 = (_QWORD *)v10[1];
        if ( (_QWORD *)*v15 != v10 )
          __fastfail(3u);
        *v14 = v10;
        v14[1] = v15;
        *v15 = v14;
        v10[1] = v14;
      }
      CCD_BTL::CDS_JOURNAL::_FillEntry((struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v14, a2, v8);
    }
  }
LABEL_14:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v32);
  return (unsigned int)v7;
}
