/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800595E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  unsigned int v4; // ebp
  __int128 v7; // xmm1
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  signed __int64 v11; // r14

  v4 = 0;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  v7 = *((_OWORD *)a2 + 3);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * (a3 & 1);
  *(_OWORD *)((char *)this + 88) = v7;
  if ( a4 )
  {
    v9 = (_OWORD *)*((_QWORD *)this + 13);
    if ( v9 )
    {
      *v9 = *(_OWORD *)a4;
      v9[1] = *((_OWORD *)a4 + 1);
      v9[2] = *((_OWORD *)a4 + 2);
      v9[3] = *((_OWORD *)a4 + 3);
    }
    else
    {
      v10 = (_OWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        64LL);
      v11 = (signed __int64)v10;
      if ( v10 )
      {
        *v10 = *(_OWORD *)a4;
        v10[1] = *((_OWORD *)a4 + 1);
        v10[2] = *((_OWORD *)a4 + 2);
        v10[3] = *((_OWORD *)a4 + 3);
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
        return v4;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 13, v11, 0LL) )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, signed __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v11);
    }
  }
  *((_QWORD *)this + 14) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 352LL);
  if ( *((_BYTE *)this + 260) )
    *((_QWORD *)this + 28) = 0LL;
  return v4;
}
