/*
 * XREFs of ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800860E0
 * Callers:
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x180070958 (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180085AFC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003CFB0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char *__fastcall CContactManager::LoadFeedbackString(CContactManager *this, HINSTANCE a2, UINT a3, int *a4)
{
  char *v5; // rsi
  int StringW; // eax
  __int64 v7; // r14
  char *v8; // rax
  WCHAR Buffer[264]; // [rsp+20h] [rbp-248h] BYREF

  v5 = 0LL;
  StringW = LoadStringW(a2, a3, Buffer, 260);
  if ( StringW > 0 && (unsigned __int64)StringW < 0x104 )
  {
    *a4 = StringW;
    v7 = StringW + 1;
    v8 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   2 * v7);
    v5 = v8;
    if ( v8 )
    {
      if ( (int)StringCchCopyW(v8, v7, (char *)Buffer) < 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, char *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v5);
        v5 = 0LL;
        *a4 = 0;
      }
    }
  }
  return v5;
}
