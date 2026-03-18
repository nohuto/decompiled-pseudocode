/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180123180
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdateAlphaMode@CEffectBrush@@AEAAXI@Z @ 0x18012339C (-UpdateAlphaMode@CEffectBrush@@AEAAXI@Z.c)
 */

__int64 __fastcall CEffectBrush::OnChanged(CEffectBrush *a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  __int64 v6; // rdi

  v2 = *((_QWORD *)a1 + 9);
  if ( v2 && *((_QWORD *)a1 + 11) && a2 == 5 )
  {
    v4 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 48) + 16LL))(*(_QWORD *)(v2 + 48));
    if ( v5 )
    {
      v6 = 0LL;
      do
      {
        if ( *(_QWORD *)(v6 + *((_QWORD *)a1 + 23)) )
          CEffectBrush::UpdateAlphaMode(a1, v4);
        ++v4;
        v6 += 8LL;
      }
      while ( v4 < v5 );
    }
    *((_QWORD *)a1 + 5) = 0LL;
  }
  return 1LL;
}
