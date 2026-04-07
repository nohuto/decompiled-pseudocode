/*
 * XREFs of ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180015AB8
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x18001AA58 (--1CButton@@MEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18003A128 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003FC64 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045838 (--1WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 * Callees:
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x1800173F0 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CBitmapSourceArray::ReleaseContents(CBitmapSourceArray *this, char a2)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  volatile signed __int32 *v6; // rdi
  void *(__fastcall *v7)(CBitmapSource *__hidden, unsigned int); // rbp

  if ( *((_DWORD *)this + 6) )
  {
    v4 = *((unsigned int *)this + 6);
    v5 = 0LL;
    do
    {
      v6 = *(volatile signed __int32 **)(v5 + *(_QWORD *)this);
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          v7 = **(void *(__fastcall ***)(CBitmapSource *__hidden, unsigned int))v6;
          if ( v7 == CBitmapSource::`vector deleting destructor' )
            CBitmapSource::`vector deleting destructor'((CBitmapSource *)v6, 1u);
          else
            v7((CBitmapSource *)v6, 1u);
        }
        *(_QWORD *)(v5 + *(_QWORD *)this) = 0LL;
      }
      v5 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 6) = 0;
  if ( a2 )
    DynArrayImpl<0>::ShrinkToSize(this, 8LL);
}
