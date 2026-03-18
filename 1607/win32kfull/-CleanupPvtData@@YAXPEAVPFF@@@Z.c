/*
 * XREFs of ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02B6050
 * Callers:
 *     <none>
 * Callees:
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C01BF4A8 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 */

void __fastcall CleanupPvtData(struct PFF *a1)
{
  unsigned int CurrentThreadId; // eax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ::SEMOBJ((SEMOBJ *)&v6, ghsemPublicPFT);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = *((_QWORD *)a1 + 20);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 8);
    if ( (v4 & 4) != 0 && *(_DWORD *)(v3 + 12) == CurrentThreadId )
    {
      i = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = *(_QWORD *)(v3 + 16);
LABEL_11:
      Win32FreePool(i, v4);
    }
    else
    {
      for ( i = *(_QWORD *)(v3 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        if ( (*(_DWORD *)(i + 8) & 4) != 0 && *(_DWORD *)(i + 12) == CurrentThreadId )
        {
          *(_QWORD *)(v3 + 16) = *(_QWORD *)(i + 16);
          goto LABEL_11;
        }
        v3 = i;
      }
    }
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v6);
}
