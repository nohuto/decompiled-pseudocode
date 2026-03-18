/*
 * XREFs of rimDereferenceDev @ 0x1C0076120
 * Callers:
 *     RIMFreeSpecificDev @ 0x1C00760D0 (RIMFreeSpecificDev.c)
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00761AC (WPP_RECORDER_SF_qq.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, int a2)
{
  void *v2; // rsi
  void *v3; // rdi
  void *v4; // rbx

  v2 = *(void **)(a1 + 16);
  v3 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = *(void **)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      5,
      10,
      (__int64)&WPP_ac6d5b2e09d75b11e5e55b95aa2457c4_Traceguids,
      (char)v2,
      a1);
    ObCloseHandle(v2, 1);
  }
  ZwClose(v3);
  return ObfDereferenceObject(v4);
}
