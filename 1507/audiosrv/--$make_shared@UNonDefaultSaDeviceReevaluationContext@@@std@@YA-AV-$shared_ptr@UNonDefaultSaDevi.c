/*
 * XREFs of ??$make_shared@UNonDefaultSaDeviceReevaluationContext@@@std@@YA?AV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@0@XZ @ 0x1800918AC
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAAXPEAUNonDefaultSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x180093534 (-_Reset0@-$_Ptr_base@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAAXPEAUNonDefaultSaDeviceRe.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<NonDefaultSaDeviceReevaluationContext>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x20uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<NonDefaultSaDeviceReevaluationContext>::`vftable';
    if ( v2 != (_DWORD *)-16LL )
      *((_QWORD *)v2 + 2) = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<NonDefaultSaDeviceReevaluationContext>::_Reset0(a1, v2 + 4, v2);
  return a1;
}
