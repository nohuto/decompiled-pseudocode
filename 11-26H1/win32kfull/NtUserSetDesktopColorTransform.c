/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1402BC770
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x140347410 (DwmAsyncSetDesktopColorTransform.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int64 __fastcall NtUserSetDesktopColorTransform(void *Src)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  void *v5; // rax
  _OWORD v7[6]; // [rsp+28h] [rbp-E0h] BYREF
  int v8; // [rsp+88h] [rbp-80h]
  __int128 v9; // [rsp+90h] [rbp-78h]
  __int128 v10; // [rsp+A0h] [rbp-68h]
  __int128 v11; // [rsp+B0h] [rbp-58h]
  __int128 v12; // [rsp+C0h] [rbp-48h]
  __int128 v13; // [rsp+D0h] [rbp-38h]
  __int128 v14; // [rsp+E0h] [rbp-28h]
  int v15; // [rsp+F0h] [rbp-18h]

  memset_0(v7, 0, 0x64uLL);
  RtlCopyFromUser(v7, Src, 0x64uLL);
  v9 = v7[0];
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  v13 = v7[4];
  v14 = v7[5];
  v15 = v8;
  v3 = PtiCurrent(v2);
  v5 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*((_QWORD *)v3 + 61) + 8LL), v4);
  return (unsigned __int64)(unsigned int)~DwmAsyncSetDesktopColorTransform(v5) >> 31;
}
