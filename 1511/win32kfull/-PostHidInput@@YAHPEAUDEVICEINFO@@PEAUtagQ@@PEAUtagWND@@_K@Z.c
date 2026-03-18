/*
 * XREFs of ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D43F0
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D6080 (xxxProcessHidInput.c)
 * Callees:
 *     AllocateHidData @ 0x1C000285C (AllocateHidData.c)
 *     FreeHidData @ 0x1C00076D0 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall PostHidInput(struct DEVICEINFO *a1, struct tagQ *a2, struct tagWND *a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v9; // r12d
  _DWORD *HidData; // rax
  _QWORD *v11; // rbx

  v5 = *((_DWORD *)a1 + 64);
  v9 = *(unsigned __int16 *)(*((_QWORD *)a1 + 50) + 44LL);
  if ( v5 % v9 )
    return 0LL;
  if ( !(*((_DWORD *)a1 + 64) / (unsigned int)*(unsigned __int16 *)(*((_QWORD *)a1 + 50) + 44LL)) )
    return 0LL;
  if ( v5 >= 0xFFFFFFF8 )
    return 0LL;
  HidData = (_DWORD *)AllocateHidData(*(_QWORD *)a1, 2, v5 + 8, a4, (__int64)a3);
  v11 = HidData;
  if ( !HidData )
    return 0LL;
  HidData[14] = v9;
  HidData[15] = v5 / v9;
  memmove(HidData + 16, *(const void **)(*((_QWORD *)a1 + 50) + 24LL), v5);
  if ( !(unsigned int)PostInputMessage((__int64)a2, (__int64)a3, 0xFFu, a4, *v11, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL) )
  {
    FreeHidData((__int64)v11);
    return 0LL;
  }
  return 1LL;
}
