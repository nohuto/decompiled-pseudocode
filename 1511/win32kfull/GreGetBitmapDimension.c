/*
 * XREFs of GreGetBitmapDimension @ 0x1C02B8130
 * Callers:
 *     NtGdiGetBitmapDimension @ 0x1C02A60D0 (NtGdiGetBitmapDimension.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDimension(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  ULONG v7; // ecx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  LOBYTE(v5) = 5;
  v6 = HmgShareLockCheck(a1, v5);
  v10 = v6;
  if ( !v6 )
  {
    v7 = 6;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v6 + 112) & 0x4000000) != 0 )
  {
    if ( a2 )
    {
      v4 = 1;
      *a2 = *(_QWORD *)(v6 + 144);
      goto LABEL_8;
    }
    v7 = 87;
LABEL_7:
    EngSetLastError(v7);
  }
LABEL_8:
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v10);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v4;
}
