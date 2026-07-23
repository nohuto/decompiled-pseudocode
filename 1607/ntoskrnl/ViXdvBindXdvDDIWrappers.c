/*
 * XREFs of ViXdvBindXdvDDIWrappers @ 0x140704F5C
 * Callers:
 *     ViXdvDriverLoadImage @ 0x14070515C (ViXdvDriverLoadImage.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     ViXdvSearchAllThunkArrays @ 0x14070532C (ViXdvSearchAllThunkArrays.c)
 */

char __fastcall ViXdvBindXdvDDIWrappers(__int64 (__fastcall *a1)(_QWORD))
{
  char result; // al
  char v2; // bl
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  unsigned int v5; // r11d
  int v6; // esi
  int v7; // r14d

  result = (char)a1;
  v2 = 0;
  ViXdvThunksNoXdvEntry = 0;
  ViXdvThunksBoundToXdv = 0;
  ViXdvThunksNotFound = 0;
  ViXdvThunksNotPristine = 0;
  ViXdvThunksShared = 0;
  if ( a1 )
  {
    v3 = (_DWORD *)a1((unsigned int)MmVerifyDriverLevel);
    v4 = v3;
    if ( v3 )
    {
      if ( *v3 == 4 )
      {
        v5 = 0;
        v6 = ViXdvThunksNoXdvEntry;
        v7 = ViXdvThunksNotFound;
        while ( v5 < v4[1] )
        {
          if ( *(_QWORD *)&v4[2 * v5 + 2] )
          {
            if ( !(unsigned __int8)ViXdvSearchAllThunkArrays(v5) )
              ViXdvThunksNotFound = ++v7;
          }
          else
          {
            ViXdvThunksNoXdvEntry = ++v6;
          }
          ++v5;
        }
        return 1;
      }
      else
      {
        VfUtilDbgPrint("XDV DDI version mismatch: kernel version %d   driver version %d\n", 4, *v3);
      }
    }
    return v2;
  }
  return result;
}
