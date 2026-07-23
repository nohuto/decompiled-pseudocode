/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x14020FCB4
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 *v4; // rbx
  bool v5; // zf
  LARGE_INTEGER *v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // rcx

  v4 = *(__int64 **)&ReasonSpecificData[3].Data1;
  v5 = *(_DWORD *)&ReasonSpecificData[3].Data4[4] == 4;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  if ( v5 )
  {
    ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
    if ( !v4 )
    {
      v4 = &EtwpDumpCallbackContext;
      EtwpDumpCallbackContext = 0LL;
      qword_1402D7D08 = 0LL;
      *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
    }
    if ( *((_BYTE *)v4 + 2) )
    {
      if ( !v4[1] )
      {
        if ( *(_WORD *)v4 < 0x40u )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(EtwpSiloState + 8LL * *(unsigned __int16 *)v4 + 912);
            if ( (v8 & 1) == 0 && *(int *)(v8 + 12) < 0 && (*(_DWORD *)(v8 + 316) & 1) == 0 )
            {
              if ( *(_QWORD *)(v8 + 712) )
              {
                _mm_pause();
              }
              else
              {
                v9 = 2 * *(unsigned __int16 *)(v8 + 152) + 48;
                *(_DWORD *)ReasonSpecificData[2].Data4 = v9;
                if ( !*(_DWORD *)ReasonSpecificData->Data4 )
                  goto LABEL_20;
                if ( v9 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
                {
                  v10 = *(_QWORD *)&ReasonSpecificData->Data1;
                  *(_DWORD *)v10 = 32223201;
                  *(_DWORD *)(v10 + 4) = *(_DWORD *)v8;
                  *(_DWORD *)(v10 + 16) = *(_DWORD *)(v8 + 4);
                  *(_DWORD *)(v10 + 12) = *(_DWORD *)(v8 + 216);
                  *(_QWORD *)(v10 + 24) = *(_QWORD *)(v8 + 808);
                  *(_DWORD *)(v10 + 8) = *(_DWORD *)(v8 + 12);
                  *(_DWORD *)(v10 + 20) = *(unsigned __int16 *)(v8 + 152);
                  *(_OWORD *)(v10 + 32) = *(_OWORD *)(v8 + 320);
                  memmove((void *)(v10 + 48), *(const void **)(v8 + 160), 2LL * *(unsigned __int16 *)(v8 + 152));
                  *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
                  *(_DWORD *)ReasonSpecificData[2].Data4 = v9;
                  *(_DWORD *)ReasonSpecificData->Data4 = v9;
LABEL_20:
                  v11 = (_QWORD *)(v8 + 112);
                  if ( (_QWORD *)*v11 != v11 )
                  {
                    v12 = *v11 - 56LL;
                    goto LABEL_29;
                  }
LABEL_28:
                  v12 = 0LL;
                  goto LABEL_29;
                }
              }
            }
            if ( ++*(_WORD *)v4 >= 0x40u )
              goto LABEL_31;
          }
        }
LABEL_33:
        *(_DWORD *)ReasonSpecificData[3].Data4 &= ~1u;
        v4[1] = 0LL;
        *((_BYTE *)v4 + 2) = 0;
        *(_WORD *)v4 = 0;
        return;
      }
      v13 = *(_QWORD *)(EtwpSiloState + 8LL * *(unsigned __int16 *)v4 + 912);
      v14 = (_DWORD *)v4[1];
      if ( v14[2] <= *v14 )
        *(_DWORD *)(v4[1] + 48) = v14[2];
      else
        v14[12] = v14[1];
      *(_DWORD *)ReasonSpecificData[2].Data4 = *(_DWORD *)(v4[1] + 48);
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = v4[1];
      v15 = *(_QWORD *)(v4[1] + 56);
      v12 = v15 - 56;
      if ( v15 == v13 + 112 )
        goto LABEL_28;
LABEL_29:
      v4[1] = v12;
      if ( !v12 )
        ++*(_WORD *)v4;
    }
    else
    {
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
      {
        v7 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
        v7[2].QuadPart = EtwpBootTime;
        v7[1].LowPart = EtwCPUSpeedInMHz;
        v7[3] = EtwPerfFreq;
        v7->LowPart = KeMaximumIncrement;
        v7->HighPart = -268424870;
        *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
        *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
        *(_DWORD *)ReasonSpecificData->Data4 = 32;
      }
      *((_BYTE *)v4 + 2) = 1;
    }
LABEL_31:
    if ( *(_WORD *)v4 < 0x40u )
    {
      *(_DWORD *)ReasonSpecificData[3].Data4 |= 1u;
      return;
    }
    goto LABEL_33;
  }
}
