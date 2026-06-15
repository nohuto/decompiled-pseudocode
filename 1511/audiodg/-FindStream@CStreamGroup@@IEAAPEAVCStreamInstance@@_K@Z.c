/*
 * XREFs of ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000383C
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400035A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 *     ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003BA0 (-StopStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003C90 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003DB0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

struct CStreamInstance *__fastcall CStreamGroup::FindStream(CStreamGroup *this, __int64 a2)
{
  _QWORD *v2; // r8
  struct CStreamInstance *result; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 12);
  while ( v2 )
  {
    result = (struct CStreamInstance *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( *((_QWORD *)result + 1) == a2 )
      return result;
  }
  return 0LL;
}
