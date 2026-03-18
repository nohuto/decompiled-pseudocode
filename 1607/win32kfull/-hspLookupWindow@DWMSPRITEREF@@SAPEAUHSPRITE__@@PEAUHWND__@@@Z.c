/*
 * XREFs of ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00528F8
 * Callers:
 *     GreZorderSprite @ 0x1C0062B5C (GreZorderSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0063028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00630A4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall DWMSPRITEREF::hspLookupWindow(HWND a1)
{
  __int64 v1; // rdi
  PRTL_GENERIC_TABLE *v2; // rcx
  _QWORD *v3; // rax
  HWND Buffer[3]; // [rsp+20h] [rbp-18h] BYREF
  char *v6; // [rsp+40h] [rbp+8h] BYREF

  Buffer[0] = a1;
  v1 = 0LL;
  v2 = (PRTL_GENERIC_TABLE *)g_pDwmState;
  v6 = (char *)g_pDwmState + 72;
  if ( g_pDwmState != (struct DwmState *)-72LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)g_pDwmState + 72, 0LL);
    v2 = (PRTL_GENERIC_TABLE *)g_pDwmState;
  }
  v3 = RtlLookupElementGenericTable(*v2, Buffer);
  if ( v3 )
    v1 = v3[1];
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  return v1;
}
