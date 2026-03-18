/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C028FC20
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1MLOCKFAST@@QEAA@XZ @ 0x1C01BF4A0 (--1MLOCKFAST@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(HDC a1)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore();
  if ( v3 == 1 )
  {
    LOBYTE(v4) = 1;
    v6 = 0;
    if ( (unsigned int)HmgMarkUnXferable(a1, v4) )
    {
      DCOBJ::DCOBJ((DCOBJ *)v7, a1);
      if ( RFONTOBJ::bValid((RFONTOBJ *)v7) )
        *(_DWORD *)(v7[0] + 2528LL) = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v7);
      v6 = 1;
    }
  }
  else
  {
    if ( v3 <= 0x10u )
      v5 = 66864LL;
    v6 = 0;
  }
  MLOCKFAST::~MLOCKFAST((MLOCKFAST *)v5);
  return v6;
}
