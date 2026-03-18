/*
 * XREFs of CitDisplayRequestChange @ 0x1C0071068
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 * Callees:
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C0011E38 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C00711A0 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 */

void __fastcall CitDisplayRequestChange(int a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rdi
  bool v2; // bl
  unsigned __int64 v3; // rsi
  unsigned int v4; // eax
  int v5; // r9d
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  bool v9; // cf
  unsigned int v10; // eax
  char v11; // bl

  v1 = qword_1C011E5D0;
  if ( qword_1C011E5D0 )
  {
    v2 = a1 != 0;
    if ( (a1 != 0) != ((*((_BYTE *)qword_1C011E5D0 + 432) & 4) != 0) )
    {
      v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C011E5D0 + 568),
        v3,
        a1);
      if ( !v2 )
      {
        CitpBitmapUpdateForTimeRange((struct _CIT_IMPACT_CONTEXT *)((char *)v1 + 16), *((_DWORD *)v1 + 135), v3);
        v4 = *((_DWORD *)v1 + 32);
        v5 = -1;
        v6 = -1;
        v7 = v3 - *((_DWORD *)v1 + 135);
        v8 = v4 + 1;
        v9 = v4 + 1 < v4;
        v10 = *((_DWORD *)v1 + 33);
        if ( !v9 )
          v6 = v8;
        *((_DWORD *)v1 + 32) = v6;
        if ( v10 + v7 >= v10 )
          v5 = v10 + v7;
        *((_DWORD *)v1 + 33) = v5;
      }
      v11 = (*((_BYTE *)v1 + 432) ^ (4 * v2)) & 4;
      *((_DWORD *)v1 + 135) = v3;
      *((_BYTE *)v1 + 432) ^= v11;
    }
  }
}
