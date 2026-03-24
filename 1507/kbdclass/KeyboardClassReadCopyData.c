/*
 * XREFs of KeyboardClassReadCopyData @ 0x1C0004680
 * Callers:
 *     KeyboardClassRead @ 0x1C0002640 (KeyboardClassRead.c)
 *     KeyboardClassServiceCallback @ 0x1C00049F0 (KeyboardClassServiceCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001870 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C0001A00 (WPP_RECORDER_SF_qqL.c)
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     WPP_RECORDER_SF_qqLL @ 0x1C0005970 (WPP_RECORDER_SF_qqLL.c)
 *     WPP_RECORDER_SF_qqLqq @ 0x1C0005BCC (WPP_RECORDER_SF_qqLqq.c)
 *     WPP_RECORDER_SF_qqqql @ 0x1C0006364 (WPP_RECORDER_SF_qqqql.c)
 */

__int64 __fastcall KeyboardClassReadCopyData(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v6; // r13
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  PDEVICE_OBJECT v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r12d
  char *v12; // r14
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  char *v16; // r14
  unsigned int v17; // r15d
  unsigned int v18; // edx
  bool v19; // zf
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 184);
  v6 = a2[23];
  v7 = *(_DWORD *)(v6 + 8);
  v8 = 12 * *(_DWORD *)(a1 + 84);
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qqLL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v8 < v7 )
    v7 = v8;
  v10 = *(_DWORD *)(a1 + 104) + *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 120);
  v11 = v10;
  if ( v7 < v10 )
    v11 = v7;
  if ( LOWORD(v9->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_qqL(v9->DeviceExtension, v10, 3, 39);
    v9 = WPP_GLOBAL_Control;
  }
  v12 = (char *)a2[3];
  if ( LOWORD(v9->DeviceType) )
    WPP_RECORDER_SF_qqLqq(v9->DeviceExtension, v10, a3, 40);
  memmove(v12, *(const void **)(a1 + 120), v11);
  v16 = &v12[v11];
  v17 = v7 - v11;
  if ( v7 == v11 )
  {
    *(_QWORD *)(a1 + 120) += v11;
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLqq(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 41);
    memmove(v16, *(const void **)(a1 + 104), v17);
    *(_QWORD *)(a1 + 120) = v17 + *(_QWORD *)(a1 + 104);
  }
  v18 = v7 / 0xC;
  v19 = *(_DWORD *)(a1 + 84) == v7 / 0xC;
  *(_DWORD *)(a1 + 84) -= v7 / 0xC;
  if ( v19 )
  {
    LOBYTE(v18) = 3;
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v18, 3, 42);
    *(_BYTE *)(a1 + 361) = 1;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqql(WPP_GLOBAL_Control->DeviceExtension, v18, v14, v15);
  a2[7] = v7;
  result = 0LL;
  *(_DWORD *)(v6 + 8) = v7;
  return result;
}
