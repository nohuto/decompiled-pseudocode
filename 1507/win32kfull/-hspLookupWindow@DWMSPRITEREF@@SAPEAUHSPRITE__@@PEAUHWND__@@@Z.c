/*
 * XREFs of ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00105F0
 * Callers:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0010330 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00103B8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0010568 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00105C4 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     GreZorderSprite @ 0x1C0010648 (GreZorderSprite.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall DWMSPRITEREF::hspLookupWindow(HWND a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  HWND Buffer[3]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  Buffer[0] = a1;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v5, (struct DwmState *)((char *)g_pDwmState + 72));
  v2 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
  if ( v2 )
    v1 = v2[1];
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  return v1;
}
