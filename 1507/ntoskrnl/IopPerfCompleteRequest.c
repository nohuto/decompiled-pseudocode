/*
 * XREFs of IopPerfCompleteRequest @ 0x1401F80E4
 * Callers:
 *     IovCompleteRequest @ 0x1407350CC (IovCompleteRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IopFreeIrpExtension @ 0x1401F7D7C (IopFreeIrpExtension.c)
 *     IopProcessIoTracking @ 0x1401F85A0 (IopProcessIoTracking.c)
 */

void __fastcall IopPerfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  char v4; // cl
  char v5; // dl
  __int64 v6; // r14
  unsigned __int8 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed __int32 v11; // esi
  int v12; // ecx
  ULONG_PTR v13; // [rsp+30h] [rbp-39h] BYREF
  signed __int32 v14; // [rsp+38h] [rbp-31h]
  unsigned __int8 *v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+48h] [rbp-21h]
  __int64 v17; // [rsp+50h] [rbp-19h]
  signed __int32 v18; // [rsp+58h] [rbp-11h]
  unsigned __int8 v19; // [rsp+5Ch] [rbp-Dh]
  _QWORD v20[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v21; // [rsp+70h] [rbp+7h]
  ULONG_PTR *v22; // [rsp+78h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]
  _QWORD *v25; // [rsp+88h] [rbp+1Fh] BYREF
  int v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+94h] [rbp+2Bh]

  if ( *(_WORD *)BugCheckParameter1 == 6 )
  {
    v4 = *(_BYTE *)(BugCheckParameter1 + 66);
    v5 = *(_BYTE *)(BugCheckParameter1 + 67);
    if ( v5 <= (char)(v4 + 1) )
    {
      v6 = 0LL;
      v7 = 0LL;
      if ( v5 <= v4 )
      {
        v7 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
        if ( *((_QWORD *)v7 + 5) )
        {
          if ( (IopPerfStatus & 2) != 0 )
          {
            v8 = *(_QWORD *)(BugCheckParameter1 + 200);
            if ( *(char *)(BugCheckParameter1 + 71) >= 0 )
            {
              if ( v8 )
              {
                if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
                {
                  v9 = *(_QWORD *)(BugCheckParameter1 + 200);
                  if ( *(char *)(BugCheckParameter1 + 71) < 0 || !v9 || (*(_BYTE *)(v9 + 2) & 0x10) == 0 )
                  {
                    IopProcessIoTracking(
                      MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 32LL),
                      *(unsigned int *)(*((_QWORD *)v7 + 5) + 72LL));
                    IopFreeIrpExtension(BugCheckParameter1, 1, 1);
                  }
                }
              }
            }
          }
          v10 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 8LL);
          if ( v10 && *v7 <= 0x1Bu )
            v6 = *(_QWORD *)(v10 + 8LL * *v7 + 112);
        }
        else
        {
          v6 = *((_QWORD *)v7 + 7);
        }
      }
      if ( (IopPerfStatus & 1) != 0 )
      {
        v27 = 0;
        v20[0] = v6;
        v20[1] = BugCheckParameter1;
        v11 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
        v21 = v11;
        v25 = v20;
        v26 = 20;
        EtwTraceKernelEvent((int)&v25, 1, 0x20000010u, 0x134u, 4200450);
        if ( !v7 )
        {
LABEL_28:
          IopfCompleteRequest(BugCheckParameter1, a2);
          v24 = 0;
          v22 = &v13;
          v13 = BugCheckParameter1;
          v14 = v11;
          v23 = 12;
          EtwTraceKernelEvent((int)&v22, 1, 0x20000010u, 0x135u, 4200450);
          return;
        }
        v17 = 0LL;
        v12 = *(_DWORD *)(BugCheckParameter1 + 48);
        v16 = *((_QWORD *)v7 + 8);
        v15 = v7;
        v18 = v11;
        v19 = v7[3];
        if ( v12 < 0 )
        {
          if ( (v7[3] & 0x80u) != 0 )
            goto LABEL_25;
        }
        else if ( (v7[3] & 0x40) != 0 )
        {
          goto LABEL_25;
        }
        if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v7[3] & 0x20) == 0 )
        {
          v7[3] |= 0xC0u;
          goto LABEL_27;
        }
LABEL_25:
        v17 = *((_QWORD *)v7 + 7);
        v16 = *((_QWORD *)v7 + 8);
LABEL_27:
        *((_QWORD *)v7 + 7) = IopPerfCompletionRoutine;
        *((_QWORD *)v7 + 8) = &v15;
        goto LABEL_28;
      }
    }
  }
  IopfCompleteRequest(BugCheckParameter1, a2);
}
