/*
 * XREFs of ?CanForceForeground2@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C00737D8
 * Callers:
 *     CheckAllowForeground @ 0x1C0073590 (CheckAllowForeground.c)
 *     CanForceForeground @ 0x1C008B4E0 (CanForceForeground.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CanForceForeground2(const struct tagPROCESSINFO *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  const struct tagPROCESSINFO *v3; // r8

  v1 = 0;
  v2 = glinp[5];
  if ( !v2 )
    return 1LL;
  v3 = *(const struct tagPROCESSINFO **)(v2 + 376);
  if ( v3 == a1
    || !gptiForeground
    || *(const struct tagPROCESSINFO **)(gptiForeground + 376LL) == a1
    || (*((_DWORD *)a1 + 3) & 0x80100) != 0
    || a1 == (const struct tagPROCESSINFO *)gppiInputProvider
    || !gpqForeground
    || !gfDebugForegroundIgnoreDebugPort
    && (PsGetProcessDebugPort(*(_QWORD *)v3) || PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 376LL))) )
  {
    return 1LL;
  }
  LOBYTE(v1) = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - *(_DWORD *)(gpsi + 3984LL) > *(_DWORD *)UPDWORDPointer(0x2000LL);
  return v1;
}
