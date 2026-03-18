/*
 * XREFs of ?ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01F0C28
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyElasticDragModeDeltas(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagTPCONTACTSTATE *a2,
        struct tagPOINTER_INFO *a3,
        struct tagPOINT *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v6; // ebx
  int v8; // ecx
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  unsigned __int64 v14; // r10
  int v15; // eax
  int v16; // ecx
  int v17; // eax

  v4 = *((_QWORD *)a3 + 5);
  v6 = 0;
  v8 = dword_1C0321EF8;
  v9 = dword_1C0321EF4
     / 0xAu
     * ((unsigned __int64)(1000LL * (*((_QWORD *)a3 + 10) - *((_QWORD *)a2 + 6)))
      / gliQpcFreq.QuadPart);
  if ( (int)v4 <= dword_1C0321EF8 )
  {
    v10 = *((_DWORD *)a2 + 19);
    if ( (v10 & 2) == 0 && *((_DWORD *)a2 + 2) > dword_1C0321EF8 )
      *((_DWORD *)a2 + 19) = v10 | 2;
    if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
    {
      a4->x -= v9;
      v6 = 1;
    }
  }
  v11 = *((_DWORD *)a1 + 53) - v8;
  if ( (int)v4 >= v11 )
  {
    v12 = *((_DWORD *)a2 + 19);
    if ( (v12 & 1) == 0 && *((_DWORD *)a2 + 2) < v11 )
      *((_DWORD *)a2 + 19) = v12 | 1;
    if ( (*((_DWORD *)a2 + 19) & 1) != 0 )
    {
      a4->x += v9;
      v6 = 1;
    }
  }
  v13 = dword_1C0321EFC;
  v14 = HIDWORD(v4);
  if ( (int)v14 <= dword_1C0321EFC )
  {
    v15 = *((_DWORD *)a2 + 19);
    if ( (v15 & 4) == 0 && *((_DWORD *)a2 + 3) > dword_1C0321EFC )
      *((_DWORD *)a2 + 19) = v15 | 4;
    if ( (*((_DWORD *)a2 + 19) & 4) != 0 )
    {
      a4->y -= v9;
      v6 = 1;
    }
  }
  v16 = *((_DWORD *)a1 + 54) - v13;
  if ( (int)v14 >= v16 )
  {
    v17 = *((_DWORD *)a2 + 19);
    if ( (v17 & 8) == 0 && *((_DWORD *)a2 + 3) < v16 )
      *((_DWORD *)a2 + 19) = v17 | 8;
    if ( (*((_DWORD *)a2 + 19) & 8) != 0 )
    {
      a4->y += v9;
      return 1;
    }
  }
  return v6;
}
