/*
 * XREFs of ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x18007E814
 * Callers:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180020E08 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180021F54 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180027590 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18007EDB0 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18007EDE4 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::HasAnimation(CTopLevelWindow *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 67) || (*((_BYTE *)this + 264) & 0x40) != 0 )
    return 1LL;
  return result;
}
