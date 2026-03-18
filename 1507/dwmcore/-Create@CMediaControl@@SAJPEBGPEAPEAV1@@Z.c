/*
 * XREFs of ?Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z @ 0x18012898C
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x180095788 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_ECMediaControl@@UEAAPEAXI@Z @ 0x1800E0F00 (--_ECMediaControl@@UEAAPEAXI@Z.c)
 *     ?Initialize@CMediaControl@@AEAAJPEBG@Z @ 0x180128A3C (-Initialize@CMediaControl@@AEAAJPEBG@Z.c)
 */

__int64 __fastcall CMediaControl::Create(const unsigned __int16 *a1, struct CMediaControl **a2)
{
  int v3; // edi
  CMediaControl *v4; // rax
  CMediaControl *v5; // rbx

  if ( a1 )
  {
    v4 = (CMediaControl *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            24LL);
    v5 = v4;
    if ( v4 )
    {
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 2) = 0LL;
      *(_QWORD *)v4 = &CMediaControl::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v3 = CMediaControl::Initialize(v5, a1);
      if ( v3 >= 0 )
      {
        g_pMediaControl = v5;
        v5 = 0LL;
      }
      if ( v5 )
        CMediaControl::`vector deleting destructor'(v5, 1);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v3;
}
