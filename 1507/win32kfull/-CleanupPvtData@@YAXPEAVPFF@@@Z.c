/*
 * XREFs of ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02B3ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C01C1304 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01C1324 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C01D1870 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall CleanupPvtData(struct PFF *a1)
{
  int v2; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v4; // r8
  __int64 i; // rcx
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 j; // rcx
  char v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = EvaluateCurrentState((int **)&g_Feature_3199244602_58389233_FeatureDescriptorDetails);
  if ( v2 )
  {
    SEMOBJ::SEMOBJ((SEMOBJ *)&v9, ghsemPublicPFT);
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v4 = *((_QWORD *)a1 + 20);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 4) != 0 && *(_DWORD *)(v4 + 12) == CurrentThreadId )
      {
        i = *((_QWORD *)a1 + 20);
        *((_QWORD *)a1 + 20) = *(_QWORD *)(v4 + 16);
LABEL_6:
        Win32FreePool(i);
      }
      else
      {
        for ( i = *(_QWORD *)(v4 + 16); i; i = *(_QWORD *)(i + 16) )
        {
          if ( (*(_DWORD *)(i + 8) & 4) != 0 && *(_DWORD *)(i + 12) == CurrentThreadId )
          {
            *(_QWORD *)(v4 + 16) = *(_QWORD *)(i + 16);
            goto LABEL_6;
          }
          v4 = i;
        }
      }
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v9);
  }
  else
  {
    v6 = (unsigned int)PsGetCurrentThreadId();
    v7 = *((_QWORD *)a1 + 20);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 8) & 4) != 0 && *(_DWORD *)(v7 + 12) == v6 )
      {
        j = *((_QWORD *)a1 + 20);
        *((_QWORD *)a1 + 20) = *(_QWORD *)(v7 + 16);
LABEL_24:
        Win32FreePool(j);
      }
      else
      {
        for ( j = *(_QWORD *)(v7 + 16); j; j = *(_QWORD *)(j + 16) )
        {
          if ( (*(_DWORD *)(j + 8) & 4) != 0 && *(_DWORD *)(j + 12) == v6 )
          {
            *(_QWORD *)(v7 + 16) = *(_QWORD *)(j + 16);
            goto LABEL_24;
          }
          v7 = j;
        }
      }
    }
  }
}
