/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00E8E20
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C004CD34 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4ScrollAxis@@@Z @ 0x1C00E8C9C (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00E8D78 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  bool *v6; // r13
  int v7; // edi
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // eax
  _BYTE *v17; // rax
  DirectComposition::CDCompDynamicArrayBase *v18; // rcx
  int v19; // esi
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r13d
  __int64 v24; // r12
  int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v27; // rbp
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rbp
  unsigned __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v33; // [rsp+28h] [rbp-30h]

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v11 = a3 - 17;
  if ( v11 )
  {
    v12 = v11 - 19;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 20;
          if ( v15 )
          {
            if ( v15 == 1 )
            {
              *((_OWORD *)this + 19) = *(_OWORD *)a4;
              *((_DWORD *)this + 80) = a4[4];
              *a6 = 1;
              *((_DWORD *)this + 4) &= ~0x2000000u;
              return (unsigned int)v7;
            }
            v7 = -1073741811;
            goto LABEL_52;
          }
          v16 = a4[2];
          Src = *(_QWORD *)a4;
          v33 = v16;
          if ( !*((_QWORD *)this + 36) )
          {
            v17 = Win32AllocPoolWithQuotaZInit(0x30uLL);
            if ( v17 )
            {
              v17[16] = 1;
              *(_QWORD *)v17 = &DirectComposition::CDCompDynamicArray<PositionShift>::`vftable';
              *((_QWORD *)v17 + 5) = 12LL;
            }
            *((_QWORD *)this + 36) = v17;
          }
          v18 = (DirectComposition::CDCompDynamicArrayBase *)*((_QWORD *)this + 36);
          if ( *((_DWORD *)this + 74) != *((_QWORD *)v18 + 4)
            || (v7 = DirectComposition::CDCompDynamicArrayBase::Grow(v18, 1LL), v7 >= 0) )
          {
            memmove(
              (void *)(*(_QWORD *)(*((_QWORD *)this + 36) + 8LL)
                     + *(_QWORD *)(*((_QWORD *)this + 36) + 40LL) * *((unsigned int *)this + 74)),
              &Src,
              *(_QWORD *)(*((_QWORD *)this + 36) + 40LL));
            ++*((_DWORD *)this + 74);
LABEL_23:
            *a6 = 1;
            return (unsigned int)v7;
          }
LABEL_52:
          if ( *((_QWORD *)this + 34) )
            DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
          return (unsigned int)v7;
        }
        v19 = 2;
      }
      else
      {
        v19 = 1;
      }
    }
    else
    {
      v19 = 0;
    }
    if ( *((_QWORD *)this + v19 + 28) )
    {
      Win32FreePool();
      *((_QWORD *)this + v19 + 28) = 0LL;
    }
    v20 = Win32AllocPoolWithQuotaZInit(Size);
    *((_QWORD *)this + v19 + 28) = v20;
    if ( v20 )
    {
      memmove(v20, a4, Size);
      *((_QWORD *)this + v19 + 31) = Size;
      *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                                v21,
                                                v19);
      goto LABEL_23;
    }
LABEL_29:
    v7 = -1073741801;
    goto LABEL_52;
  }
  if ( !a4 && *((_DWORD *)this + 70) )
  {
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
    goto LABEL_27;
  }
  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  Src = Size >> 3;
  v22 = Win32AllocPoolWithQuota();
  *((_QWORD *)this + 34) = v22;
  if ( !v22 )
    goto LABEL_29;
  *((_DWORD *)this + 70) = 0;
  v23 = Src;
  v24 = 0LL;
  while ( (unsigned int)v24 < v23 )
  {
    v25 = a4[2 * v24];
    v26 = (unsigned int)(v25 - 1);
    if ( v25 && v26 < *((_QWORD *)a2 + 11) )
    {
      _mm_lfence();
      v27 = *(_QWORD *)(v26 * *((_QWORD *)a2 + 12) + *((_QWORD *)a2 + 8));
    }
    else
    {
      v27 = 0LL;
    }
    if ( v27 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 112LL))(v27, 103LL) )
    {
      *(_QWORD *)(*((_QWORD *)this + 34) + 16LL * (unsigned int)v24) = v27;
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 34)
                                                                                              + 16LL * (unsigned int)v24));
      ++*((_DWORD *)this + 70);
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      goto LABEL_50;
    v28 = a4[2 * v24 + 1];
    if ( !v28 )
      goto LABEL_49;
    v29 = (unsigned int)(v28 - 1);
    if ( v29 >= *((_QWORD *)a2 + 11) )
    {
      v30 = 0LL;
    }
    else
    {
      _mm_lfence();
      v30 = *(_QWORD *)(v29 * *((_QWORD *)a2 + 12) + *((_QWORD *)a2 + 8));
    }
    if ( !v30 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 112LL))(v30, 102LL) )
    {
      v7 = -1073741811;
LABEL_49:
      *(_QWORD *)(*((_QWORD *)this + 34) + 16LL * (unsigned int)v24 + 8) = 0LL;
      goto LABEL_50;
    }
    *(_QWORD *)(*((_QWORD *)this + 34) + 16LL * (unsigned int)v24 + 8) = v30;
    DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 34)
                                                                                            + 16LL * (unsigned int)v24
                                                                                            + 8));
LABEL_50:
    v24 = (unsigned int)(v24 + 1);
    if ( v7 < 0 )
      break;
  }
  v6 = a6;
  if ( v7 < 0 )
    goto LABEL_52;
LABEL_27:
  *v6 = 1;
  *((_DWORD *)this + 4) &= ~0x2000u;
  return (unsigned int)v7;
}
