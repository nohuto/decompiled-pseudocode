/*
 * XREFs of CitDisplayRequestChange @ 0x1C000735C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 * Callees:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0007504 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C0052834 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 */

void __fastcall CitDisplayRequestChange(unsigned int a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rdi
  bool v2; // bl
  unsigned __int64 v3; // rsi
  char v4; // bl
  unsigned int v5; // eax
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  bool v10; // cf
  unsigned int v11; // eax

  v1 = qword_1C0101FE0;
  if ( qword_1C0101FE0 )
  {
    v2 = a1 != 0;
    if ( (a1 != 0) != ((*((_BYTE *)qword_1C0101FE0 + 432) & 4) != 0) )
    {
      v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C0101FE0 + 520),
        v3,
        a1);
      if ( !v2 )
      {
        CitpBitmapUpdateForTimeRange((struct _CIT_IMPACT_CONTEXT *)((char *)v1 + 16), *((_DWORD *)v1 + 123), v3);
        v5 = *((_DWORD *)v1 + 32);
        v6 = -1;
        v7 = -1;
        v8 = v3 - *((_DWORD *)v1 + 123);
        v9 = v5 + 1;
        v10 = v5 + 1 < v5;
        v11 = *((_DWORD *)v1 + 33);
        if ( !v10 )
          v7 = v9;
        *((_DWORD *)v1 + 32) = v7;
        if ( v11 + v8 >= v11 )
          v6 = v11 + v8;
        *((_DWORD *)v1 + 33) = v6;
      }
      v4 = (*((_BYTE *)v1 + 432) ^ (4 * v2)) & 4;
      *((_DWORD *)v1 + 123) = v3;
      *((_BYTE *)v1 + 432) ^= v4;
    }
  }
}
