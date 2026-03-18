/*
 * XREFs of ?RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z @ 0x18008BB7C
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?SynchronizeValidAdapters@CD3DDeviceTable@@QEAAXPEAVCDXGIEnumeration@@@Z @ 0x180091B48 (-SynchronizeValidAdapters@CD3DDeviceTable@@QEAAXPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceTable::RemoveDeviceFromTable(CD3DDeviceTable *this, struct ID3D11Device1 *a2)
{
  __int64 v3; // rsi
  unsigned int i; // ecx
  struct ID3D11Device1 *v6; // r14
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rax
  _OWORD *v23; // rcx
  __int64 v24; // rdx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx

  v3 = 0LL;
  for ( i = 0; (unsigned int)v3 < *((_DWORD *)this + 26); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(struct ID3D11Device1 **)(*((_QWORD *)this + 10) + 8 * v3);
    if ( v6 == a2 )
    {
      if ( v6 )
        ((void (__fastcall *)(struct ID3D11Device1 *))v6->lpVtbl->Release)(v6);
      v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v8 = *((_DWORD *)this + 10);
      if ( (unsigned int)v3 >= v8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      else
      {
        v9 = *((_QWORD *)this + 2);
        v10 = v3;
        if ( (unsigned int)v3 < v8 - 1 )
        {
          do
          {
            v21 = v10 + 1;
            v22 = 304LL * v10;
            v23 = (_OWORD *)(304LL * (v10 + 1) + v9);
            v24 = 2LL;
            v25 = (_OWORD *)(v9 + v22);
            do
            {
              v26 = v23[1];
              *v25 = *v23;
              v27 = v23[2];
              v25[1] = v26;
              v28 = v23[3];
              v25[2] = v27;
              v29 = v23[4];
              v25[3] = v28;
              v30 = v23[5];
              v25[4] = v29;
              v31 = v23[6];
              v25[5] = v30;
              v32 = v23[7];
              v23 += 8;
              v25[6] = v31;
              v25 += 8;
              *(v25 - 1) = v32;
              --v24;
            }
            while ( v24 );
            v33 = v23[1];
            *v25 = *v23;
            v34 = v23[2];
            v10 = v21;
            v25[1] = v33;
            v25[2] = v34;
          }
          while ( v21 < *((_DWORD *)this + 10) - 1 );
        }
        --*((_DWORD *)this + 10);
      }
      v11 = *((_DWORD *)this + 26);
      if ( (unsigned int)v3 >= v11 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      else
      {
        v12 = *((_QWORD *)this + 10);
        v13 = (unsigned int)v3;
        if ( (unsigned int)v3 < v11 - 1 )
        {
          do
          {
            v35 = (unsigned int)(v13 + 1);
            *(_QWORD *)(v12 + 8 * v13) = *(_QWORD *)(v12 + 8 * v35);
            v13 = v35;
          }
          while ( (unsigned int)v35 < *((_DWORD *)this + 26) - 1 );
        }
        --*((_DWORD *)this + 26);
      }
      v14 = *((_DWORD *)this + 34);
      if ( (unsigned int)v3 >= v14 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      else
      {
        v15 = *((_QWORD *)this + 14);
        v16 = (unsigned int)v3;
        if ( (unsigned int)v3 < v14 - 1 )
        {
          do
          {
            v36 = (unsigned int)(v16 + 1);
            *(_DWORD *)(v15 + 4 * v16) = *(_DWORD *)(v15 + 4 * v36);
            v16 = v36;
          }
          while ( (unsigned int)v36 < *((_DWORD *)this + 34) - 1 );
        }
        --*((_DWORD *)this + 34);
      }
      v17 = *((_DWORD *)this + 18);
      if ( (unsigned int)v3 >= v17 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      else
      {
        v18 = *((_QWORD *)this + 6);
        v19 = (unsigned int)v3;
        if ( (unsigned int)v3 < v17 - 1 )
        {
          do
          {
            v37 = (unsigned int)(v19 + 1);
            *(_QWORD *)(v18 + 8 * v19) = *(_QWORD *)(v18 + 8 * v37);
            v19 = v37;
          }
          while ( (unsigned int)v37 < *((_DWORD *)this + 18) - 1 );
        }
        --*((_DWORD *)this + 18);
      }
      i = 1;
    }
  }
  return i;
}
