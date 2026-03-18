/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1C0291160
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  char v7; // si
  MLOCKFAST *v8; // rcx
  unsigned int v9; // edi
  int v10; // ebx
  __int64 v11; // rdx
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  if ( ((unsigned __int64)a1 & 0x800000) != 0 )
    return 1LL;
  v7 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  v9 = 0;
  if ( v7 == 1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v12, a1);
    v10 = 0;
    if ( v12[0] && v4 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v10 = 1;
      *(_DWORD *)(v12[0] + 2528LL) = v4;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    if ( v10 )
    {
      LOBYTE(v11) = 1;
      v9 = HmgMarkXferable(a1, v11);
    }
  }
  GreReleaseHmgrSemaphore(v8);
  return v9;
}
