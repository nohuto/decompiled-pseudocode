/*
 * XREFs of ?PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINTER_INFO_UNION@@@Z @ 0x18005C6AC
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005C970 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetScreenDimensions@PointerInfoAdapter@@AEAAXPEAUHMONITOR__@@PEAK111@Z @ 0x18005C4BC (-GetScreenDimensions@PointerInfoAdapter@@AEAAXPEAUHMONITOR__@@PEAK111@Z.c)
 */

void __fastcall PointerInfoAdapter::PopulatePointerInfoProperties(
        PointerInfoAdapter *this,
        HMONITOR *a2,
        struct Pointer *a3,
        struct tagPOINTER_INFO_UNION *a4)
{
  __int64 v7; // rax
  PointerInfoAdapter *v8; // rax
  __int128 v9; // [rsp+40h] [rbp-9h]
  __int128 v10; // [rsp+50h] [rbp+7h]
  __int128 v11; // [rsp+60h] [rbp+17h]
  float v12[12]; // [rsp+70h] [rbp+27h]
  PointerInfoAdapter *v13; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v14; // [rsp+B8h] [rbp+6Fh] BYREF
  unsigned int v15; // [rsp+C0h] [rbp+77h] BYREF
  unsigned int v16; // [rsp+C8h] [rbp+7Fh] BYREF

  v13 = this;
  PointerInfoAdapter::GetScreenDimensions(this, a2[4], (unsigned int *)&v13, &v15, &v14, &v16);
  v7 = *(_QWORD *)((char *)a3 + 12);
  *((_QWORD *)a4 + 4) = v7;
  *((_QWORD *)a4 + 6) = v7;
  LODWORD(v13) = (int)(float)((float)((float)((float)*((int *)a3 + 3) / (float)(int)v13) * (float)(int)v14) * 100.0);
  HIDWORD(v13) = (int)(float)((float)((float)((float)*((int *)a3 + 4) / (float)(int)v15) * (float)(int)v16) * 100.0);
  v8 = v13;
  *((_QWORD *)a4 + 5) = v13;
  *((_QWORD *)a4 + 7) = v8;
  *((_DWORD *)a4 + 16) = *((_DWORD *)a2 + 2);
  *((_QWORD *)a4 + 10) = a2[2];
  if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    *(_DWORD *)a4 = 2;
  }
  else if ( (*(_BYTE *)a2 & 0x20) != 0 )
  {
    *(_DWORD *)a4 = 5;
  }
  else if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    *(_DWORD *)a4 = 4;
  }
  else
  {
    *(_DWORD *)a4 = (*(_BYTE *)a2 & 0x10 | 8u) >> 3;
  }
  *((_QWORD *)a4 + 2) = *((unsigned int *)a2 + 1);
  *((_QWORD *)a4 + 3) = 0LL;
  *(_QWORD *)((char *)a4 + 68) = 0LL;
  *((_DWORD *)a4 + 19) = 0;
  if ( (*(_DWORD *)a2 & 8) != 0 )
  {
    *((_QWORD *)a4 + 12) = 0LL;
    *(_OWORD *)((char *)a4 + 120) = 0LL;
    *((_QWORD *)a4 + 17) = 0LL;
    *((_DWORD *)a4 + 26) = *((_DWORD *)a3 + 3) - 1;
    *((_DWORD *)a4 + 28) = *((_DWORD *)a3 + 3) + 1;
    *((_DWORD *)a4 + 27) = *((_DWORD *)a3 + 4) - 1;
    *((_DWORD *)a4 + 29) = *((_DWORD *)a3 + 4) + 1;
  }
  else if ( (*(_DWORD *)a2 & 0x12) == 0x10 )
  {
    *((_QWORD *)a4 + 12) = 0LL;
    *((_QWORD *)a4 + 13) = 0LL;
    *((_QWORD *)a4 + 14) = 0LL;
  }
  if ( (*((_BYTE *)a3 + 4) & 2) != 0 )
    *((_DWORD *)a4 + 3) |= 0x14u;
  if ( (*((_BYTE *)a3 + 4) & 4) != 0 )
    *((_DWORD *)a4 + 3) |= 0x8000u;
  *((_DWORD *)a4 + 3) |= 0x4000u;
  v10 = *((_OWORD *)a2 + 36);
  v9 = *((_OWORD *)a2 + 35);
  *(_OWORD *)v12 = *((_OWORD *)a2 + 38);
  v11 = *((_OWORD *)a2 + 37);
  if ( *(float *)&v9 != 1.0
    || *((float *)&v9 + 1) != 0.0
    || *((float *)&v9 + 2) != 0.0
    || *((float *)&v9 + 3) != 0.0
    || *(float *)&v10 != 0.0
    || *((float *)&v10 + 1) != 1.0
    || *((float *)&v10 + 2) != 0.0
    || *((float *)&v10 + 3) != 0.0
    || *(float *)&v11 != 0.0
    || *((float *)&v11 + 1) != 0.0
    || *((float *)&v11 + 2) != 1.0
    || *((float *)&v11 + 3) != 0.0
    || v12[0] != 0.0
    || v12[1] != 0.0
    || v12[2] != 0.0
    || v12[3] != 1.0 )
  {
    *((_DWORD *)a4 + 3) |= 0x400000u;
  }
}
