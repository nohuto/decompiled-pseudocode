/*
 * XREFs of ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00623BC
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C005FA50 (DxgkAugmentCdsj.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C005E8B4 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C005EAF4 (-_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00625E8 (-Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0062F18 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C0065090 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z @ 0x1C0065198 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@CCD_BTL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B04EC (-_PreVerify@CDS_JOURNAL@CCD_BTL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@CCD_BTL@@AEAAJAEBU_ENTRY@12@@Z @ 0x1C0180CAC (-_PurgeRelatedEntries@CDS_JOURNAL@CCD_BTL@@AEAAJAEBU_ENTRY@12@@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::Augment(CCD_BTL::CDS_JOURNAL *this, struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  CCD_BTL *v5; // rcx
  __int64 v6; // rbx
  struct DXGADAPTER *v7; // r8
  _QWORD *v8; // rsi
  _OWORD *v9; // rax
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  _QWORD *v17; // rax
  CCD_BTL *v18; // rcx
  int v19; // eax
  bool v20; // dl
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // rax
  _BYTE v25[64]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  _BYTE v27[64]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v28; // [rsp+C0h] [rbp-40h]
  _QWORD v29[10]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CCD_BTL::CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v27, 8u, 0);
  CCD_BTL::Global();
  LODWORD(v6) = CCD_BTL::_FillTopology(v5, (struct CCD_TOPOLOGY *)v27, a2, 0x40u);
  if ( (int)v6 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v6) = -1071774974;
    }
    else
    {
      v8 = (_QWORD *)((char *)this + 24);
      if ( (_QWORD *)*v8 != v8 && *(_DWORD *)this == 1 )
      {
        LODWORD(v6) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v27, this);
        if ( (_DWORD)v6 == -1073741266 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v7, v16);
          v17[4] = v27;
          v17[3] = this;
          v17[5] = v28;
          WdLogEvent5_WdWarning(v17);
          LODWORD(v6) = CCD_BTL::CDS_JOURNAL::Purge(this);
        }
      }
      v9 = v28;
      *(_OWORD *)this = *v28;
      *((_DWORD *)this + 4) = *((_DWORD *)v9 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v29[0] = 0LL;
        v29[1] = 0LL;
        memset((char *)&v29[2] + 4, 0, 60);
        CCD_BTL::CDS_JOURNAL::_FillEntry((struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v29, a2, v7);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v25, 8u, 0);
        CCD_BTL::Global();
        LODWORD(v6) = CCD_BTL::_FillTopology(v18, (struct CCD_TOPOLOGY *)v25, a2, 0xFu);
        if ( (int)v6 >= 0 )
        {
          v19 = CCD_BTL::CDS_JOURNAL::_CommitEntry(
                  (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v29,
                  (struct CCD_TOPOLOGY *)v25);
          v6 = v19;
          if ( v19 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v25, v20),
                v22 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v25, 1u),
                v6 = v22,
                v22 < 0) )
          {
            v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v23[3] = v6;
            v23[4] = v25;
            v23[5] = v26;
            WdLogEvent5_WdError(v23);
          }
          else
          {
            LODWORD(v6) = CCD_BTL::CDS_JOURNAL::_PurgeRelatedEntries(
                            this,
                            (const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v29);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v25);
        goto LABEL_14;
      }
      v10 = (_DWORD *)*v8;
      if ( (_QWORD *)*v8 == v8 )
        goto LABEL_8;
      do
      {
        v12 = v10;
        if ( v10[8] == *((_DWORD *)a2 + 4) && v10[5] == *((_DWORD *)a2 + 1) && v10[6] == *((_DWORD *)a2 + 2) )
          break;
        v10 = *(_DWORD **)v10;
      }
      while ( v10 != (_DWORD *)v8 );
      if ( v10 == (_DWORD *)v8 )
      {
LABEL_8:
        v12 = operator new[](0x50uLL, 0x63644356u, PagedPool);
        if ( v12 )
        {
          *v12 = 0LL;
          v12[1] = 0LL;
          *(_QWORD *)((char *)v12 + 20) = 0LL;
          *(_QWORD *)((char *)v12 + 28) = 0LL;
          *((_DWORD *)v12 + 9) = 0;
          memset(v12 + 5, 0, 0x28uLL);
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v24 = WdLogNewEntry5_WdLowResource(v11);
          *(_QWORD *)(v24 + 24) = 80LL;
          WdLogEvent5_WdLowResource(v24);
          LODWORD(v6) = -1073741801;
          goto LABEL_14;
        }
        v13 = (_QWORD *)v8[1];
        *v12 = v8;
        v12[1] = v13;
        if ( (_QWORD *)*v13 != v8 )
          __fastfail(3u);
        *v13 = v12;
        v8[1] = v12;
      }
      CCD_BTL::CDS_JOURNAL::_FillEntry((struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v12, a2, v7);
    }
  }
LABEL_14:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v27);
  return (unsigned int)v6;
}
