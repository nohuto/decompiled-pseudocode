/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C02910C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??1MLOCKFAST@@QEAA@XZ @ 0x1C01C12FC (--1MLOCKFAST@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( ((unsigned __int64)a1 & 0x800000) != 0 )
    return 1LL;
  v6 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  if ( v6 == 1 )
  {
    LOBYTE(v7) = 1;
    v9 = 0;
    if ( (unsigned int)HmgMarkUnXferable(a1, v7) )
    {
      DCOBJ::DCOBJ((DCOBJ *)v10, a1);
      if ( RFONTOBJ::bValid((RFONTOBJ *)v10) )
        *(_DWORD *)(v10[0] + 2528LL) = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v10);
      v9 = 1;
    }
  }
  else
  {
    if ( v6 <= 0x10u )
      v8 = 66864LL;
    v9 = 0;
  }
  MLOCKFAST::~MLOCKFAST((MLOCKFAST *)v8);
  return v9;
}
