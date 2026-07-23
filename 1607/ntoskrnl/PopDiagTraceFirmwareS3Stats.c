/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x1403DF66C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  unsigned int *PoolWithTag; // rbx
  unsigned int *v1; // rdi
  ULONG v2; // r9d
  unsigned __int64 v3; // kr00_8
  const EVENT_DESCRIPTOR *v4; // rdx
  unsigned __int64 v5; // kr08_8
  ULONG NumberOfBytes; // [rsp+38h] [rbp-19h]
  unsigned int NumberOfBytes_4; // [rsp+3Ch] [rbp-15h] BYREF
  int v8; // [rsp+40h] [rbp-11h] BYREF
  int v9; // [rsp+44h] [rbp-Dh] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]

  if ( (unsigned int)off_1402F37E8() == -1073741820 )
  {
    if ( NumberOfBytes )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x74703353u);
      if ( PoolWithTag )
      {
        if ( (int)off_1402F37E8() >= 0 )
        {
          v1 = PoolWithTag + 2;
          if ( PoolWithTag + 2 < (unsigned int *)((char *)PoolWithTag + PoolWithTag[1]) )
          {
            while ( *(_WORD *)v1 )
            {
              if ( *(_WORD *)v1 == 1 )
              {
                v2 = 2;
                v10 = *(_QWORD *)(v1 + 1) / 0xF4240uLL;
                v5 = *(_QWORD *)(v1 + 3);
                *(_QWORD *)&UserData.Size = 8LL;
                UserData.Ptr = (ULONGLONG)&v10;
                v11 = v5 / 0xF4240;
                v4 = &POP_ETW_EVENT_S3FWSTATS_SUSPEND;
                v13 = &v11;
                v14 = 8LL;
                goto LABEL_10;
              }
LABEL_11:
              v1 = (unsigned int *)((char *)v1 + *((char *)v1 + 2));
              if ( v1 >= (unsigned int *)((char *)PoolWithTag + PoolWithTag[1]) )
                goto LABEL_12;
            }
            v2 = 3;
            NumberOfBytes_4 = v1[1];
            v8 = *((_QWORD *)v1 + 1) / 0xF4240uLL;
            v3 = *((_QWORD *)v1 + 2);
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&NumberOfBytes_4;
            v13 = (unsigned __int64 *)&v8;
            v9 = v3 / 0xF4240;
            v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_S3FWSTATS_RESUME;
            v14 = 4LL;
            v15 = &v9;
            v16 = 4LL;
LABEL_10:
            EtwWrite(PopDiagHandle, v4, 0LL, v2, &UserData);
            goto LABEL_11;
          }
        }
LABEL_12:
        ExFreePoolWithTag(PoolWithTag, NumberOfBytes);
      }
    }
  }
}
