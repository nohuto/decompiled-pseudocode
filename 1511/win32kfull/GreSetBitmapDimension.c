/*
 * XREFs of GreSetBitmapDimension @ 0x1C02B81B8
 * Callers:
 *     NtGdiSetBitmapDimension @ 0x1C02A7C60 (NtGdiSetBitmapDimension.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapDimension(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v13);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v14[0] = v10;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
    {
      if ( a4 )
        *a4 = *(_QWORD *)(v10 + 144);
      v13[1] = __PAIR64__(a3, a2);
      v8 = 1;
      *(_QWORD *)(v10 + 144) = __PAIR64__(a3, a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)v14);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  return v8;
}
