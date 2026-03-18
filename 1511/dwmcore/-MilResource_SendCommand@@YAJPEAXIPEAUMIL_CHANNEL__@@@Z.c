/*
 * XREFs of ?MilResource_SendCommand@@YAJPEAXIPEAUMIL_CHANNEL__@@@Z @ 0x18009F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FA40 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009FBD0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FD64 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800A006C (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800A0D40 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 */

__int64 __fastcall MilResource_SendCommand(void *a1, unsigned int a2, struct MIL_CHANNEL__ *a3)
{
  unsigned int v6; // ecx
  CDataStreamWriter **v7; // r14
  int v8; // ebx
  int v9; // eax
  int v10; // r15d
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int *v16; // rsi
  int v17; // r14d
  unsigned int *(__fastcall *v18)(CDataStreamBlock *__hidden); // r15
  unsigned int *v19; // r15
  unsigned int *v20; // rsi
  unsigned int *(__fastcall *v21)(CDataStreamBlock *__hidden); // r12
  unsigned int *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-38h]
  unsigned int v29; // [rsp+20h] [rbp-38h]

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
      goto LABEL_38;
    }
    if ( a2 < 4 )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x17Cu);
      goto LABEL_38;
    }
    v7 = (CDataStreamWriter **)((char *)a3 + 176);
    v8 = 0;
    if ( !*((_QWORD *)a3 + 22) )
    {
      v26 = CCommandBatch::Create(v6, (struct CCommandBatch **)a3 + 22);
      v8 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x2A5u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x286u);
      goto LABEL_11;
    }
    if ( a2 + 4 < a2 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x157u);
      v8 = -2147024362;
    }
    else
    {
      v9 = CDataStreamWriter::EnsureSize(*v7, a2 + 4);
      v10 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x159u);
      v8 = v10;
      if ( v10 >= 0 )
      {
LABEL_11:
        if ( v8 < 0 )
        {
          v28 = 393;
        }
        else
        {
          v11 = CDataStreamWriter::BeginItem(*v7);
          v8 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x18Fu);
            goto LABEL_15;
          }
          v12 = CDataStreamWriter::AddItemData(*v7, a1, a2);
          v8 = v12;
          if ( v12 >= 0 )
          {
            *((_BYTE *)a3 + 233) = 1;
            goto LABEL_15;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x191u);
          v27 = CDataStreamWriter::EndItem(*v7);
          if ( v27 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x198u);
          v28 = 409;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v28);
LABEL_15:
        if ( v8 >= 0 )
        {
          if ( *((_BYTE *)a3 + 233) )
          {
            v13 = *((_QWORD *)a3 + 22);
            if ( !*(_QWORD *)(v13 + 32) && !*(_DWORD *)(v13 + 40) )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
              goto LABEL_26;
            }
            v14 = *(_DWORD *)(v13 + 40);
            v15 = (v14 + 3) & 0xFFFFFFFC;
            if ( v15 < v14 )
            {
              v29 = 224;
            }
            else
            {
              *(_DWORD *)(v13 + 40) = v15;
              v16 = *(unsigned int **)(v13 + 16);
              v17 = v15 - v14;
              v18 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v16 + 8LL);
              if ( v18 == CDataStreamBlock::GetWrittenSize )
                v19 = v16 + 7;
              else
                v19 = v18(*(CDataStreamBlock **)(v13 + 16));
              v20 = *(unsigned int **)(v13 + 16);
              v21 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v20 + 8LL);
              if ( v21 == CDataStreamBlock::GetWrittenSize )
                v22 = v20 + 7;
              else
                v22 = v21(*(CDataStreamBlock **)(v13 + 16));
              v23 = *v22;
              if ( v23 + v17 < v23 )
              {
                *v19 = -1;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x212u);
              }
              else
              {
                *v19 = v23 + v17;
                v24 = *(_DWORD *)(v13 + 28);
                if ( v24 + v17 >= v24 )
                {
                  *(_DWORD *)(v13 + 28) = v24 + v17;
                  **(_DWORD **)(v13 + 32) = *(_DWORD *)(v13 + 40);
                  *(_QWORD *)(v13 + 32) = 0LL;
                  *(_DWORD *)(v13 + 40) = 0;
LABEL_26:
                  *((_BYTE *)a3 + 233) = 0;
                  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a3 + 184));
                  return 0;
                }
                *(_DWORD *)(v13 + 28) = -1;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x213u);
              }
              v29 = 228;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v29);
            goto LABEL_26;
          }
          v8 = -2003303406;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1E3u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x150u);
LABEL_49:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18Bu);
          return (unsigned int)v8;
        }
LABEL_38:
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a3 + 184));
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x14Fu);
        goto LABEL_49;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x28Eu);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x186u);
  return 2147942487LL;
}
