/*
 * XREFs of ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C016ABBC
 * Callers:
 *     DxgkEnableHighPrecisionBrightness @ 0x1C016B340 (DxgkEnableHighPrecisionBrightness.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall LPMDisplayCtrl::EnableHighPrecisionBrightness(
        LPMDisplayCtrl *this,
        unsigned __int8 a2,
        const struct _WIN32_POWERINFO_BRIGHTNESSCHANGE *a3)
{
  PFILE_OBJECT *v3; // rbx
  signed int v4; // ebp
  __int64 v7; // rax
  PFILE_OBJECT *v8; // rcx
  bool v9; // r15
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v11; // edx
  unsigned int v12; // r8d

  v3 = FileObject;
  v4 = 0;
  if ( !a2 || *((_DWORD *)FileObject + 28) )
  {
    v8 = FileObject + 17;
    *((_DWORD *)FileObject + 11) = a2;
    if ( a2 )
      memmove(v8, a3, 0x20uLL);
    else
      memset(v8, 0, 0x20uLL);
  }
  else
  {
    v4 = -1073741637;
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v7);
  }
  v9 = a2 && v4 >= 0;
  Flink = v3[2]->IrpList.Flink[4].Flink;
  KeWaitForSingleObject(&Flink[259], Executive, 0, 0, 0LL);
  BYTE1(Flink[258].Flink) = v9;
  KeReleaseMutex((PRKMUTEX)&Flink[259], 0);
  v11 = -1;
  if ( a2 )
    v12 = *((_DWORD *)a3 + 5);
  else
    v12 = -1;
  if ( a2 )
    v11 = *((_DWORD *)a3 + 1);
  DxgkLogCodePointPacket(0x53u, v11, v12, v4);
  return (unsigned int)v4;
}
