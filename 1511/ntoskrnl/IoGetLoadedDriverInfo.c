/*
 * XREFs of IoGetLoadedDriverInfo @ 0x1401B8298
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401B7B00 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1401BA414 (KeCapturePersistentThreadState.c)
 * Callees:
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 */

__int64 __fastcall IoGetLoadedDriverInfo(char a1, _DWORD *a2, _DWORD *a3)
{
  PVOID *v3; // r10
  int v4; // r11d
  int i; // ebx
  __int64 v9; // r10
  int v10; // eax
  __int64 result; // rax

  v3 = (PVOID *)PsLoadedModuleList;
  v4 = 0;
  for ( i = 0; ; i += v10 + 9 )
  {
    if ( v3 == &PsLoadedModuleList )
    {
      *a2 = v4;
      result = 0LL;
      *a3 = i;
      return result;
    }
    if ( a1
      && (!IopIsAddressRangeValid((__int64)v3, 160LL)
       || !IopIsAddressRangeValid(*(_QWORD *)(v9 + 96), *(unsigned __int16 *)(v9 + 88))) )
    {
      break;
    }
    v10 = *((unsigned __int16 *)v3 + 44);
    ++v4;
    v3 = (PVOID *)*v3;
  }
  return 3221225473LL;
}
