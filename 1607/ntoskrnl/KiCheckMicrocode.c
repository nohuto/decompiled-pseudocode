/*
 * XREFs of KiCheckMicrocode @ 0x1403DD0B8
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall KiCheckMicrocode(__int64 a1)
{
  char v2; // al
  unsigned __int64 v3; // r11
  unsigned int v4; // r8d
  unsigned int v10; // r10d
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char *i; // rcx
  ULONG_PTR v19; // rdx
  __int64 v20; // rcx

  if ( KiMicrocodeTrackerEnabled && !KiBootProcessorsStarted )
  {
    v2 = *(_BYTE *)(a1 + 1597);
    if ( v2 == 1 )
    {
      v3 = 0LL;
      v4 = __readmsr(0x8Bu);
      _RAX = 1LL;
      __asm { cpuid }
      v10 = _RAX;
    }
    else
    {
      if ( v2 != 2 )
        return;
      __writemsr(0x8Bu, 0LL);
      _RAX = 1LL;
      __asm { cpuid }
      v10 = _RAX;
      v16 = __readmsr(0x8Bu);
      v4 = HIDWORD(v16);
      v3 = __readmsr(0x17u);
    }
    v17 = 0LL;
    for ( i = (char *)&unk_1403AA864; ; i += 24 )
    {
      if ( !*((_DWORD *)i - 1) )
      {
        v20 = 3 * v17;
        *((_DWORD *)&KiMicrocodeTracker + 2 * v20) = 1;
        *((_DWORD *)&KiMicrocodeTracker + 2 * v20 + 1) = v10;
        *((_QWORD *)&KiMicrocodeTracker + v20 + 1) = v3;
        *((_DWORD *)&KiMicrocodeTracker + 2 * v20 + 4) = v4;
        return;
      }
      if ( *(_DWORD *)i == v10 && *(_QWORD *)(i + 4) == v3 )
        break;
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= 4 )
        return;
    }
    v19 = *((unsigned int *)&KiMicrocodeTracker + 6 * v17 + 4);
    if ( (_DWORD)v19 != v4 )
      KeBugCheckEx(0x17Eu, v10, v19, v4, *(unsigned int *)(a1 + 36));
  }
}
