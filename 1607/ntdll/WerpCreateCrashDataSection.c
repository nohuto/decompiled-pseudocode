/*
 * XREFs of WerpCreateCrashDataSection @ 0x180006D00
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall WerpCreateCrashDataSection(_QWORD *a1, void **a2)
{
  int v4; // ebx
  void *v5; // rcx
  void *v6; // rdx
  _OWORD v8[3]; // [rsp+50h] [rbp-30h] BYREF
  void *v9; // [rsp+B0h] [rbp+30h] BYREF
  void *v10; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v11; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+48h] BYREF

  LODWORD(v8[0]) = 0;
  memset((char *)v8 + 8, 0, 0x28uLL);
  v10 = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      LODWORD(v8[0]) = 48;
      *((_QWORD *)&v8[0] + 1) = 0LL;
      v8[2] = 0LL;
      DWORD2(v8[1]) = 2;
      *(_QWORD *)&v8[1] = 0LL;
      v11 = 248LL;
      v4 = NtCreateSection(&v10, 983047LL, v8, &v11, 4, 0x8000000, 0LL);
      if ( v4 < 0 || (v4 = ZwMapViewOfSection(v10, -1LL, &v9, 0LL, 0LL, 0LL, &v12, 1, 0, 4), v4 < 0) )
      {
        v5 = v10;
        v6 = v9;
      }
      else
      {
        memset(v9, 0, 0xF8uLL);
        v5 = 0LL;
        *a1 = v10;
        v6 = 0LL;
        v4 = 0;
        *a2 = v9;
        v10 = 0LL;
        v9 = 0LL;
      }
      if ( v6 )
      {
        NtUnmapViewOfSection(-1LL, v6);
        v5 = v10;
        v9 = 0LL;
      }
      if ( v5 )
        NtClose(v5);
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v4;
}
