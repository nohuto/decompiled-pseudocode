/*
 * XREFs of ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x18007798C
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@USaDeviceReevaluationContext@@@std@@QEAAXPEAUSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x18007951C (-_Reset0@-$_Ptr_base@USaDeviceReevaluationContext@@@std@@QEAAXPEAUSaDeviceReevaluationContext@@P.c)
 */

_QWORD *__fastcall std::make_shared<SaDeviceReevaluationContext,>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x20uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<SaDeviceReevaluationContext>::`vftable';
    if ( v2 != (_DWORD *)-16LL )
    {
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
    }
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<SaDeviceReevaluationContext>::_Reset0(a1, v2 + 4, v2);
  return a1;
}
