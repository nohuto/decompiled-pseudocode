/*
 * XREFs of ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18004E490
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18004F6E4 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004F9A0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004FAE0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004FC24 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180050650 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall MilResource_SendCommand(void *a1, unsigned int a2, struct MIL_CHANNEL__ *a3)
{
  unsigned int v6; // ecx
  CDataStreamWriter **v7; // r14
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // r15d
  int v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // esi
  unsigned int *(__fastcall *v18)(CDataStreamBlock *__hidden); // r15
  unsigned int *WrittenSize; // rax
  unsigned int *v20; // r12
  unsigned int *(__fastcall *v21)(CDataStreamBlock *__hidden); // r15
  unsigned int *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-38h]
  unsigned int v28; // [rsp+20h] [rbp-38h]

  if ( a1 || !a2 )
  {
    if ( !a3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x189u);
      return 2147942487LL;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a3 + 184));
    if ( *((_BYTE *)a3 + 233) )
    {
      v8 = -2003303407;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x173u);
      goto LABEL_36;
    }
    if ( a2 < 4 )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x17Cu);
      goto LABEL_36;
    }
    v7 = (CDataStreamWriter **)((char *)a3 + 176);
    v8 = 0;
    if ( !*((_QWORD *)a3 + 22) )
    {
      v9 = CCommandBatch::Create(v6, (struct CCommandBatch **)a3 + 22);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2A5u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x286u);
      goto LABEL_13;
    }
    if ( a2 + 4 < a2 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x157u);
      v8 = -2147024362;
    }
    else
    {
      v10 = CDataStreamWriter::EnsureSize(*v7, a2 + 4);
      v11 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x159u);
      v8 = v11;
      if ( v11 >= 0 )
      {
LABEL_13:
        if ( v8 < 0 )
        {
          v27 = 393;
        }
        else
        {
          v12 = CDataStreamWriter::BeginItem(*v7);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x18Fu);
            goto LABEL_17;
          }
          v13 = CDataStreamWriter::AddItemData(*v7, a1, a2);
          v8 = v13;
          if ( v13 >= 0 )
          {
            *((_BYTE *)a3 + 233) = 1;
            goto LABEL_17;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x191u);
          v26 = CDataStreamWriter::EndItem(*v7);
          if ( v26 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x198u);
          v27 = 409;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v27);
LABEL_17:
        if ( v8 >= 0 )
        {
          if ( *((_BYTE *)a3 + 233) )
          {
            v14 = *((_QWORD *)a3 + 22);
            if ( !*(_QWORD *)(v14 + 32) && !*(_DWORD *)(v14 + 40) )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
              goto LABEL_28;
            }
            v15 = *(_DWORD *)(v14 + 40);
            v16 = (v15 + 3) & 0xFFFFFFFC;
            if ( v16 < v15 )
            {
              v28 = 224;
            }
            else
            {
              *(_DWORD *)(v14 + 40) = v16;
              v17 = v16 - v15;
              v18 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**(_QWORD **)(v14 + 16) + 8LL);
              if ( v18 == CDataStreamBlock::GetWrittenSize )
                WrittenSize = CDataStreamBlock::GetWrittenSize(*(CDataStreamBlock **)(v14 + 16));
              else
                WrittenSize = v18(*(CDataStreamBlock **)(v14 + 16));
              v20 = WrittenSize;
              v21 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(**(_QWORD **)(v14 + 16) + 8LL);
              if ( v21 == CDataStreamBlock::GetWrittenSize )
                v22 = CDataStreamBlock::GetWrittenSize(*(CDataStreamBlock **)(v14 + 16));
              else
                v22 = v21(*(CDataStreamBlock **)(v14 + 16));
              v23 = *v22;
              if ( v23 + v17 < v23 )
              {
                *v20 = -1;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x212u);
              }
              else
              {
                *v20 = v23 + v17;
                v24 = *(_DWORD *)(v14 + 28);
                if ( v24 + v17 >= v24 )
                {
                  *(_DWORD *)(v14 + 28) = v24 + v17;
                  **(_DWORD **)(v14 + 32) = *(_DWORD *)(v14 + 40);
                  *(_QWORD *)(v14 + 32) = 0LL;
                  *(_DWORD *)(v14 + 40) = 0;
LABEL_28:
                  *((_BYTE *)a3 + 233) = 0;
                  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a3 + 184));
                  return 0;
                }
                *(_DWORD *)(v14 + 28) = -1;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x213u);
              }
              v28 = 228;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v28);
            goto LABEL_28;
          }
          v8 = -2003303406;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1E3u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x150u);
LABEL_47:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18Bu);
          return (unsigned int)v8;
        }
LABEL_36:
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a3 + 184));
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x14Fu);
        goto LABEL_47;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x28Eu);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x186u);
  return 2147942487LL;
}
