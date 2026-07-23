/*
 * XREFs of sub_1404667A0 @ 0x1404667A0
 * Callers:
 *     Callout @ 0x1404B9134 (Callout.c)
 * Callees:
 *     QueryUpdateFileEaAllowedExt_0 @ 0x140001298 (QueryUpdateFileEaAllowedExt_0.c)
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     RtlUIntAdd @ 0x14008FE90 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x14009A12C (RtlULongLongAdd.c)
 *     KeQueryTimeIncrement @ 0x1400C7DB0 (KeQueryTimeIncrement.c)
 *     StringCbLengthW @ 0x1400E6560 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     ZwSetCachedSigningLevel @ 0x140153440 (ZwSetCachedSigningLevel.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_140218764 @ 0x140218764 (sub_140218764.c)
 *     sub_140218D28 @ 0x140218D28 (sub_140218D28.c)
 *     sub_140219284 @ 0x140219284 (sub_140219284.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_1403B4904 @ 0x1403B4904 (sub_1403B4904.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_140489CE0 @ 0x140489CE0 (sub_140489CE0.c)
 *     sub_14048AE6C @ 0x14048AE6C (sub_14048AE6C.c)
 *     sub_14048AE90 @ 0x14048AE90 (sub_14048AE90.c)
 *     sub_14048AF2C @ 0x14048AF2C (sub_14048AF2C.c)
 *     sub_14048AFC8 @ 0x14048AFC8 (sub_14048AFC8.c)
 *     sub_14048B030 @ 0x14048B030 (sub_14048B030.c)
 *     sub_14048B094 @ 0x14048B094 (sub_14048B094.c)
 *     sub_14048B0FC @ 0x14048B0FC (sub_14048B0FC.c)
 *     sub_14048B198 @ 0x14048B198 (sub_14048B198.c)
 *     sub_14048B200 @ 0x14048B200 (sub_14048B200.c)
 *     sub_14048B21C @ 0x14048B21C (sub_14048B21C.c)
 *     sub_14048B2D0 @ 0x14048B2D0 (sub_14048B2D0.c)
 *     sub_14048B380 @ 0x14048B380 (sub_14048B380.c)
 *     sub_14048B41C @ 0x14048B41C (sub_14048B41C.c)
 *     sub_14048B4C8 @ 0x14048B4C8 (sub_14048B4C8.c)
 *     sub_14048B52C @ 0x14048B52C (sub_14048B52C.c)
 *     sub_14048B550 @ 0x14048B550 (sub_14048B550.c)
 *     sub_14048B5B8 @ 0x14048B5B8 (sub_14048B5B8.c)
 *     sub_14048B654 @ 0x14048B654 (sub_14048B654.c)
 *     sub_14048B708 @ 0x14048B708 (sub_14048B708.c)
 *     sub_14048B76C @ 0x14048B76C (sub_14048B76C.c)
 *     sub_14048B808 @ 0x14048B808 (sub_14048B808.c)
 *     sub_14048B8BC @ 0x14048B8BC (sub_14048B8BC.c)
 *     sub_14048B958 @ 0x14048B958 (sub_14048B958.c)
 *     sub_14048B9F0 @ 0x14048B9F0 (sub_14048B9F0.c)
 *     sub_14048BA14 @ 0x14048BA14 (sub_14048BA14.c)
 *     sub_14048BAAC @ 0x14048BAAC (sub_14048BAAC.c)
 *     sub_14048BB20 @ 0x14048BB20 (sub_14048BB20.c)
 *     sub_14048BBBC @ 0x14048BBBC (sub_14048BBBC.c)
 *     sub_14048BC4C @ 0x14048BC4C (sub_14048BC4C.c)
 *     sub_14048BCB8 @ 0x14048BCB8 (sub_14048BCB8.c)
 *     FsRtlSetKernelEaFile @ 0x1404A233C (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404A2780 (FsRtlQueryKernelEaFile.c)
 *     sub_1404B6C58 @ 0x1404B6C58 (sub_1404B6C58.c)
 *     sub_140516C6C @ 0x140516C6C (sub_140516C6C.c)
 *     sub_140679828 @ 0x140679828 (sub_140679828.c)
 *     sub_140679C08 @ 0x140679C08 (sub_140679C08.c)
 *     sub_140679E80 @ 0x140679E80 (sub_140679E80.c)
 *     sub_14067A244 @ 0x14067A244 (sub_14067A244.c)
 *     sub_14067A85C @ 0x14067A85C (sub_14067A85C.c)
 *     sub_14067AC78 @ 0x14067AC78 (sub_14067AC78.c)
 *     sub_14067B494 @ 0x14067B494 (sub_14067B494.c)
 *     sub_14067B814 @ 0x14067B814 (sub_14067B814.c)
 *     sub_14067BCE0 @ 0x14067BCE0 (sub_14067BCE0.c)
 *     sub_14067C058 @ 0x14067C058 (sub_14067C058.c)
 *     sub_14067C2C0 @ 0x14067C2C0 (sub_14067C2C0.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
 *     sub_14067C9CC @ 0x14067C9CC (sub_14067C9CC.c)
 */

__int64 __fastcall sub_1404667A0(unsigned int *a1, unsigned int a2, UINT a3, _QWORD *a4, UINT *a5)
{
  PVOID v5; // rbx
  unsigned int *v6; // r12
  UINT *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int *v9; // r14
  __int64 v10; // rdi
  char *v11; // r15
  unsigned int *v12; // r8
  SIZE_T v13; // r14
  char *v14; // r12
  unsigned int v15; // r8d
  unsigned int *v16; // rcx
  unsigned int v17; // r9d
  SIZE_T v18; // rsi
  const void *v19; // r13
  unsigned int v20; // ecx
  PVOID PoolWithTag; // rax
  ULONGLONG v22; // rbx
  PVOID v23; // rax
  PVOID v24; // rax
  PVOID v25; // rax
  int v26; // eax
  void *v27; // rcx
  unsigned __int8 *v28; // r14
  ULONGLONG v29; // rdi
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  char v33; // si
  PVOID v34; // rax
  char *v35; // r8
  _BYTE *v36; // r12
  int v37; // esi
  UINT v38; // r11d
  ULONGLONG v39; // r9
  ULONGLONG v40; // rsi
  unsigned __int8 *v41; // rdi
  unsigned __int8 *v42; // r8
  _BYTE *v43; // r12
  int v44; // edx
  int v45; // eax
  int v46; // r11d
  UINT v47; // edx
  unsigned int v48; // r15d
  int v49; // r8d
  int v50; // r11d
  int v51; // r15d
  int v52; // r11d
  int v53; // r15d
  int v54; // r11d
  int v55; // r15d
  int v56; // r11d
  int v57; // r15d
  unsigned int v58; // r11d
  unsigned __int8 *v59; // rbx
  int v60; // esi
  __int64 v61; // r14
  unsigned int v62; // r15d
  int v63; // r11d
  unsigned __int8 v64; // al
  bool v65; // zf
  int v66; // eax
  int v67; // eax
  ULONGLONG v68; // rcx
  __m128i v69; // xmm1
  __m128i v70; // xmm2
  const __m128i *v71; // rax
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __m128i v75; // xmm1
  __m128i v76; // xmm1
  __m128i v77; // xmm1
  int v78; // eax
  int v79; // eax
  SIZE_T v80; // r14
  char *v81; // rbx
  PVOID v82; // r12
  unsigned int v83; // edi
  unsigned __int64 v84; // rdx
  char *v85; // rcx
  unsigned int v86; // r9d
  int v87; // eax
  char *v88; // r8
  int v89; // edx
  int *v90; // rax
  int v91; // eax
  unsigned int *v92; // rax
  int v93; // edx
  __int64 v94; // r8
  unsigned int *v95; // rcx
  SIZE_T v96; // r14
  const void *v97; // r12
  unsigned int *v98; // rax
  unsigned int i; // edx
  __int64 v100; // r8
  unsigned int *v101; // rcx
  SIZE_T v102; // rdi
  const void *v103; // r15
  unsigned int *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r8
  unsigned int *v107; // rbx
  PVOID v108; // rax
  PVOID v109; // rax
  int v110; // eax
  unsigned int v111; // edi
  ULONGLONG v112; // rcx
  NTSTATUS v113; // ebx
  unsigned int v114; // r10d
  int v115; // r9d
  int v116; // r9d
  _QWORD *v117; // rax
  ULONGLONG v118; // rcx
  unsigned int v119; // r10d
  int v120; // r9d
  unsigned int v121; // r9d
  const wchar_t *v122; // rcx
  unsigned int v123; // r15d
  WCHAR *v124; // rax
  const WCHAR *v125; // r14
  ULONGLONG v126; // rcx
  unsigned int v127; // r10d
  int v128; // r9d
  int v129; // r9d
  _DWORD *v130; // rax
  ULONGLONG v131; // rcx
  unsigned int v132; // r10d
  int v133; // r9d
  int v134; // r9d
  _DWORD *v135; // rax
  UINT v136; // r14d
  int v137; // ebx
  PVOID v138; // r15
  int v139; // eax
  int v140; // r15d
  int v141; // eax
  unsigned int v142; // eax
  unsigned int v143; // r12d
  unsigned int v144; // eax
  unsigned int v145; // ecx
  unsigned int v146; // ecx
  int v147; // r8d
  int v148; // edx
  unsigned int v149; // eax
  unsigned int v150; // ecx
  unsigned int v151; // eax
  int v152; // eax
  UINT v153; // eax
  int v154; // ebx
  int v155; // eax
  NTSTATUS v156; // eax
  int v157; // eax
  __int64 v158; // rbx
  BOOL v159; // eax
  PVOID v160; // rax
  unsigned int v161; // r9d
  int v162; // edx
  _DWORD *v163; // r10
  _DWORD *v164; // rcx
  _DWORD *v165; // r10
  unsigned int v166; // esi
  int v167; // r11d
  _DWORD *v168; // r10
  _QWORD *v169; // rax
  UINT *v170; // r10
  ULONGLONG v171; // r10
  int v172; // r11d
  int v173; // edx
  _DWORD *v174; // r10
  _DWORD *v175; // rcx
  UINT *v176; // r10
  ULONGLONG v177; // r10
  int v178; // r11d
  UINT *v179; // r10
  UINT *v180; // r10
  ULONGLONG v181; // r10
  int v182; // r11d
  int v183; // edx
  _DWORD *v184; // r10
  _DWORD *v185; // rcx
  UINT *v186; // r10
  ULONGLONG v187; // r10
  unsigned int v188; // r9d
  int v189; // r11d
  int v190; // edx
  _DWORD *v191; // r10
  unsigned int *v192; // rcx
  int v193; // r15d
  bool v194; // sf
  UINT v195; // ecx
  char *v196; // rax
  char *v197; // rbx
  ULONGLONG v198; // rdx
  ULONGLONG v199; // rcx
  UINT v200; // edx
  __int64 *v201; // rbx
  UINT v202; // eax
  size_t v203; // rdi
  unsigned int v204; // ecx
  __int64 v205; // rbx
  unsigned __int64 v206; // rcx
  __m128i v207; // xmm1
  __m128i v208; // xmm2
  const __m128i *v209; // rax
  __m128i v210; // xmm0
  __m128i v211; // xmm0
  __m128i v212; // xmm1
  __m128i v213; // xmm1
  __m128i v214; // xmm1
  __m128i v215; // xmm1
  __int64 v216; // r12
  char *v217; // rax
  char *v218; // rcx
  unsigned __int64 v219; // r8
  unsigned int v220; // r10d
  int v221; // r11d
  unsigned __int8 *v222; // r14
  char *v223; // rsi
  unsigned int v224; // r15d
  int v225; // ebx
  size_t v226; // r8
  size_t v227; // r9
  unsigned __int8 *v228; // rdx
  _BYTE *v229; // rbx
  int v230; // esi
  unsigned __int8 *v231; // rdi
  __int64 v232; // r14
  int v233; // r12d
  int v234; // r15d
  UINT v235; // ecx
  ULONGLONG v236; // r11
  unsigned __int8 v237; // al
  unsigned int v238; // r15d
  int v239; // edi
  int v240; // r15d
  int v241; // edi
  int v242; // r15d
  int v243; // edi
  int v244; // r15d
  unsigned int v245; // edi
  int v246; // r15d
  int v247; // edi
  _BYTE *v248; // r8
  UINT v249; // r10d
  int v250; // r15d
  PVOID v251; // rax
  PVOID v252; // rbx
  UINT v253; // edx
  UINT v254; // ecx
  UINT v255; // eax
  _DWORD *v256; // rax
  void *v257; // rdi
  ULONGLONG v258; // rcx
  ULONGLONG v259; // rcx
  UINT v260; // eax
  void *v261; // rcx
  void *v262; // rcx
  void *v263; // rcx
  void *v264; // rcx
  void *v265; // rcx
  void *v266; // rcx
  int v268; // eax
  int v269; // eax
  int v270; // eax
  int v271; // eax
  UINT v272; // eax
  ULONGLONG v273; // rcx
  unsigned int v274; // r10d
  int v275; // r9d
  int v276; // r9d
  _QWORD *v277; // rax
  ULONGLONG v278; // rcx
  unsigned int v279; // r10d
  int v280; // r9d
  int v281; // r9d
  _DWORD *v282; // rax
  ULONGLONG v283; // rcx
  unsigned int v284; // r10d
  int v285; // r9d
  unsigned int v286; // r9d
  const wchar_t *v287; // rcx
  unsigned int v288; // edi
  PVOID v289; // rax
  void *v290; // rbx
  ULONGLONG v291; // rcx
  unsigned int v292; // r10d
  int v293; // r9d
  unsigned int v294; // r11d
  ULONGLONG v295; // rax
  ULONGLONG v296; // rcx
  unsigned int v297; // r10d
  int v298; // r9d
  int v299; // r9d
  _DWORD *v300; // rax
  int v301; // ebx
  NTSTATUS v302; // eax
  UINT v303; // ecx
  UINT v304; // r9d
  UINT v305; // r10d
  NTSTATUS v306; // eax
  UINT v307; // r9d
  UINT v308; // edx
  SIZE_T v309; // r9
  UINT v310; // ecx
  UINT v311; // edx
  UINT v312; // ecx
  PVOID v313; // rax
  unsigned int v314; // r9d
  int v315; // edx
  _DWORD *v316; // r10
  int *v317; // rcx
  UINT *v318; // r10
  ULONGLONG v319; // r10
  int v320; // r11d
  _DWORD *v321; // r10
  _QWORD *v322; // rax
  UINT *v323; // r10
  ULONGLONG v324; // r10
  unsigned int v325; // r9d
  int v326; // r11d
  _DWORD *v327; // r10
  _OWORD *v328; // rax
  int v329; // eax
  int v330; // eax
  PSE_EXPORTS v331; // rbx
  ULONG v332; // edi
  ULONG v333; // edi
  SIZE_T v334; // rbx
  ACL *v335; // rax
  ACL *v336; // rsi
  BOOLEAN v337; // bl
  NTSTATUS v338; // eax
  bool v339; // r14
  bool v340; // di
  int v341; // esi
  int v342; // eax
  int v343; // eax
  NTSTATUS v344; // eax
  UINT v345; // edx
  UINT v346; // edx
  NTSTATUS v347; // eax
  UINT v348; // ecx
  NTSTATUS v349; // eax
  UINT v350; // edx
  UINT v351; // ecx
  ACCESS_MASK v352; // eax
  int v353; // ecx
  unsigned int v354; // r10d
  ULONGLONG v355; // rcx
  unsigned int v356; // r11d
  int v357; // r9d
  int v358; // r9d
  _QWORD *v359; // rax
  int v360; // eax
  ULONGLONG v361; // rcx
  NTSTATUS v362; // eax
  unsigned int v363; // r10d
  int v364; // r9d
  unsigned int v365; // r9d
  ULONGLONG v366; // rdx
  int updated; // eax
  int v368; // ebx
  NTSTATUS v369; // eax
  UINT v370; // edx
  PVOID v371; // rax
  int v372; // edx
  _DWORD *v373; // r10
  int *v374; // rcx
  NTSTATUS v375; // eax
  UINT v376; // r9d
  int v377; // ecx
  UINT v378; // r9d
  UINT v379; // ecx
  UINT v380; // edx
  UINT v381; // ecx
  unsigned int v382; // r9d
  UINT v383; // eax
  PVOID v384; // rax
  unsigned int v385; // r11d
  int v386; // edx
  _DWORD *v387; // r10
  _DWORD *v388; // rcx
  UINT *v389; // r9
  ULONGLONG v390; // r9
  int v391; // r10d
  unsigned int v392; // r11d
  _DWORD *v393; // r9
  unsigned __int64 *v394; // rax
  ULONGLONG v395; // rcx
  unsigned int v396; // r10d
  int v397; // r9d
  int v398; // r9d
  _QWORD *v399; // rax
  int v400; // eax
  int v401; // ebx
  int v402; // eax
  NTSTATUS v403; // eax
  NTSTATUS v404; // edi
  NTSTATUS v405; // eax
  UINT v406; // r9d
  int v407; // ecx
  UINT v408; // r9d
  unsigned int v409; // r9d
  UINT v410; // ecx
  NTSTATUS v411; // eax
  UINT v412; // edx
  UINT v413; // ecx
  PVOID v414; // rax
  unsigned int v415; // r9d
  int v416; // edx
  _DWORD *v417; // r10
  int *v418; // rcx
  UINT *v419; // r10
  NTSTATUS v420; // eax
  ULONGLONG v421; // r10
  int v422; // r11d
  _DWORD *v423; // r10
  _QWORD *v424; // rax
  UINT *v425; // r10
  ULONGLONG v426; // r10
  unsigned int v427; // r9d
  int v428; // r11d
  int v429; // edx
  _DWORD *v430; // r10
  int *v431; // rcx
  void *v432; // rcx
  void *v433; // rcx
  void *v434; // rcx
  void *v435; // rcx
  void *v436; // rcx
  void *v437; // rcx
  int v438; // r11d
  int v439; // r15d
  UINT v440; // r9d
  UINT v441; // r10d
  int v442; // r8d
  char v443; // dl
  int v444; // eax
  unsigned __int8 *v445; // rax
  ULONGLONG v446; // rdx
  unsigned __int8 *v447; // rbx
  int v448; // edi
  unsigned __int8 v449; // cl
  int v450; // eax
  int v451; // eax
  UINT v452; // r11d
  UINT v453; // r15d
  int v454; // eax
  int v455; // eax
  void *v456; // rcx
  void *v457; // rcx
  void *v458; // rcx
  NTSTATUS v459; // eax
  UINT v460; // edx
  NTSTATUS v461; // eax
  UINT *v462; // r9
  ULONGLONG v463; // r9
  UINT v464; // r10d
  int v465; // r11d
  int v466; // edx
  _DWORD *v467; // r9
  _DWORD *v468; // rcx
  PVOID v469; // rax
  int v470; // edx
  _DWORD *v471; // r10
  _DWORD *v472; // rcx
  NTSTATUS v473; // eax
  UINT v474; // edx
  NTSTATUS v475; // eax
  UINT *v476; // r9
  ULONGLONG v477; // r9
  UINT v478; // r10d
  int v479; // r11d
  int v480; // edx
  _DWORD *v481; // r9
  int *v482; // rcx
  PVOID v483; // rax
  int v484; // edx
  _DWORD *v485; // r10
  int *v486; // rcx
  NTSTATUS v487; // eax
  UINT v488; // edx
  NTSTATUS v489; // eax
  UINT *v490; // r9
  ULONGLONG v491; // r9
  UINT v492; // r10d
  int v493; // r11d
  int v494; // edx
  _DWORD *v495; // r9
  int *v496; // rcx
  PVOID v497; // rax
  int v498; // edx
  _DWORD *v499; // r10
  int *v500; // rcx
  int v501; // eax
  NTSTATUS v502; // eax
  NTSTATUS v503; // eax
  UINT v504; // edx
  NTSTATUS v505; // eax
  UINT v506; // edx
  int v507; // eax
  ULONGLONG v508; // rcx
  unsigned int v509; // r10d
  int v510; // r9d
  int v511; // r9d
  _QWORD *v512; // rax
  NTSTATUS v513; // eax
  NTSTATUS v514; // edi
  NTSTATUS v515; // eax
  NTSTATUS v516; // eax
  UINT v517; // ecx
  UINT v518; // r9d
  UINT v519; // r9d
  UINT v520; // edx
  UINT v521; // r9d
  unsigned int v522; // r9d
  UINT v523; // ecx
  UINT v524; // edx
  NTSTATUS v525; // eax
  UINT v526; // ecx
  UINT v527; // eax
  PVOID v528; // rax
  unsigned int v529; // r11d
  _DWORD *v530; // r10
  int v531; // edx
  int *v532; // rcx
  NTSTATUS v533; // eax
  UINT v534; // edx
  UINT *v535; // r9
  int v536; // ebx
  NTSTATUS v537; // eax
  ULONGLONG v538; // r9
  UINT v539; // r10d
  unsigned int v540; // r11d
  _DWORD *v541; // r9
  _QWORD *v542; // rax
  ULONGLONG v543; // rcx
  unsigned int v544; // r10d
  int v545; // r9d
  int v546; // r9d
  _QWORD *v547; // rax
  NTSTATUS v548; // eax
  __int64 v549; // rbx
  ULONG TimeIncrement; // eax
  NTSTATUS v551; // eax
  UINT v552; // ecx
  UINT v553; // r9d
  NTSTATUS v554; // eax
  UINT v555; // r9d
  UINT v556; // edx
  NTSTATUS v557; // eax
  UINT v558; // r9d
  unsigned int v559; // r9d
  UINT v560; // ecx
  UINT v561; // edx
  NTSTATUS v562; // eax
  UINT v563; // ecx
  UINT v564; // eax
  PVOID v565; // rax
  unsigned int v566; // r11d
  int v567; // edx
  _DWORD *v568; // r10
  _DWORD *v569; // rcx
  NTSTATUS v570; // eax
  UINT v571; // edx
  UINT *v572; // r9
  int v573; // ebx
  NTSTATUS v574; // eax
  ULONGLONG v575; // r9
  UINT v576; // r10d
  unsigned int v577; // r11d
  _DWORD *v578; // r9
  _QWORD *v579; // rax
  PSE_EXPORTS v580; // rbx
  ULONG v581; // edi
  ULONG v582; // edi
  SIZE_T v583; // rbx
  ACL *v584; // rax
  __int64 v585; // rdx
  __int64 v586; // r8
  ACL *v587; // rsi
  BOOLEAN v588; // bl
  bool v589; // di
  int v590; // esi
  int UpdateFileEaAllowedExt_0; // eax
  PSE_EXPORTS v592; // rbx
  ULONG v593; // edi
  ULONG v594; // edi
  SIZE_T v595; // rbx
  ACL *v596; // rax
  __int64 v597; // rdx
  __int64 v598; // r8
  ACL *v599; // rsi
  BOOLEAN v600; // bl
  bool v601; // di
  int v602; // esi
  int v603; // eax
  PSE_EXPORTS v604; // rbx
  ULONG v605; // edi
  ULONG v606; // edi
  ULONG v607; // ebx
  ACL *v608; // rax
  ACL *v609; // rsi
  unsigned int v610; // r10d
  BOOLEAN v611; // bl
  bool v612; // r14
  const void **v613; // rax
  int v614; // esi
  PVOID v615; // r12
  int v616; // eax
  ULONGLONG v617; // rcx
  unsigned int v618; // r11d
  int v619; // r9d
  int v620; // r9d
  void **v621; // rax
  ULONGLONG v622; // rcx
  unsigned int v623; // r11d
  int v624; // r9d
  int v625; // r9d
  _DWORD *v626; // rax
  ULONGLONG v627; // rcx
  unsigned int v628; // r11d
  int v629; // r9d
  int v630; // r9d
  NTSTATUS *v631; // rax
  ULONGLONG v632; // rcx
  unsigned int v633; // r10d
  int v634; // r9d
  int v635; // r9d
  _QWORD *v636; // rbx
  void *v637; // r15
  int v638; // r12d
  NTSTATUS v639; // eax
  struct _FILE_OBJECT *v640; // rsi
  size_t *v641; // r14
  SE_SIGNING_LEVEL v642; // cl
  size_t *v643; // rbx
  int v644; // edi
  char *v645; // rax
  char *v646; // rbx
  unsigned __int8 *v647; // r8
  unsigned int v648; // edx
  __int64 v649; // r9
  unsigned int v650; // ecx
  int v651; // eax
  NTSTATUS v652; // eax
  UINT v653; // edx
  UINT *v654; // r9
  NTSTATUS v655; // eax
  ULONGLONG v656; // r9
  UINT v657; // r10d
  int v658; // r11d
  int v659; // edx
  _DWORD *v660; // r9
  _DWORD *v661; // rcx
  PVOID v662; // rax
  int v663; // edx
  _DWORD *v664; // r10
  _DWORD *v665; // rcx
  unsigned int v666; // r10d
  ULONGLONG v667; // rcx
  unsigned int v668; // r11d
  int v669; // r9d
  int v670; // r9d
  _QWORD *v671; // rax
  ULONGLONG v672; // rcx
  unsigned int v673; // r11d
  int v674; // r9d
  int v675; // r9d
  void **v676; // rax
  ULONGLONG v677; // rcx
  unsigned int v678; // r10d
  int v679; // r9d
  int v680; // r9d
  UINT *v681; // rax
  NTSTATUS v682; // eax
  struct _FILE_OBJECT *v683; // rdi
  size_t *v684; // rbx
  size_t v685; // rax
  NTSTATUS v686; // eax
  UINT v687; // r9d
  NTSTATUS v688; // eax
  UINT v689; // r9d
  PVOID v690; // rax
  unsigned int v691; // r11d
  _DWORD *v692; // r10
  _QWORD *v693; // rax
  NTSTATUS v694; // eax
  UINT v695; // edx
  UINT *v696; // r9
  int v697; // edi
  UINT v698; // ebx
  NTSTATUS v699; // eax
  ULONGLONG v700; // r9
  unsigned int v701; // r11d
  unsigned int *v702; // r9
  unsigned int v703; // r10d
  void *v704; // rcx
  unsigned int v705; // r10d
  ULONGLONG v706; // rcx
  unsigned int v707; // r11d
  int v708; // r9d
  int v709; // r9d
  _QWORD *v710; // rax
  ULONGLONG v711; // rcx
  unsigned int v712; // r10d
  int v713; // r9d
  int v714; // r9d
  void **v715; // rax
  char *v716; // rbx
  unsigned __int8 *v717; // rsi
  NTSTATUS v718; // eax
  struct _FILE_OBJECT *v719; // r14
  char *v720; // rax
  unsigned __int16 *v721; // rax
  int KernelEaFile; // eax
  __int64 v723; // rdx
  unsigned __int8 *v724; // r12
  unsigned __int8 *v725; // r8
  unsigned int v726; // ecx
  __int64 v727; // r9
  unsigned int v728; // edx
  int v729; // eax
  int v730; // edi
  size_t *v731; // r15
  int v732; // r14d
  NTSTATUS v733; // eax
  UINT v734; // r9d
  NTSTATUS v735; // eax
  UINT v736; // r9d
  PVOID v737; // rax
  unsigned int v738; // r11d
  _DWORD *v739; // r10
  _QWORD *v740; // rax
  NTSTATUS v741; // eax
  UINT v742; // edx
  UINT *v743; // r9
  int v744; // ebx
  NTSTATUS v745; // eax
  ULONGLONG v746; // r9
  UINT v747; // r10d
  unsigned int v748; // r11d
  int v749; // edx
  _DWORD *v750; // r9
  int *v751; // rcx
  NTSTATUS v752; // eax
  UINT v753; // r9d
  int v754; // ecx
  NTSTATUS v755; // eax
  UINT v756; // r9d
  UINT v757; // eax
  PVOID v758; // rax
  unsigned int v759; // r11d
  int v760; // edx
  _DWORD *v761; // r10
  _DWORD *v762; // rcx
  NTSTATUS v763; // eax
  UINT v764; // edx
  UINT *v765; // r9
  int v766; // ebx
  NTSTATUS v767; // eax
  ULONGLONG v768; // r9
  UINT v769; // r10d
  unsigned int v770; // r11d
  _DWORD *v771; // r9
  unsigned __int64 *v772; // rax
  NTSTATUS v773; // eax
  UINT v774; // edx
  ULONGLONG v775; // rcx
  unsigned int v776; // r10d
  int v777; // r9d
  unsigned int v778; // r9d
  const wchar_t *v779; // rcx
  unsigned int v780; // eax
  size_t v781; // rdi
  PVOID v782; // rax
  void *v783; // rbx
  ULONGLONG v784; // rcx
  unsigned int v785; // r10d
  int v786; // r9d
  int v787; // r9d
  int *v788; // rax
  NTSTATUS v789; // eax
  UINT v790; // edx
  UINT v791; // ebx
  unsigned __int64 v792; // r14
  size_t v793; // rdi
  PVOID v794; // rax
  UINT v795; // ecx
  UINT v796; // edx
  NTSTATUS v797; // eax
  UINT v798; // ecx
  UINT v799; // eax
  PVOID v800; // rax
  int v801; // edx
  _DWORD *v802; // r10
  _DWORD *v803; // rcx
  ULONGLONG v804; // rcx
  unsigned int v805; // r10d
  int v806; // r9d
  int v807; // r9d
  int *v808; // rax
  NTSTATUS v809; // eax
  UINT v810; // edx
  NTSTATUS v811; // eax
  UINT v812; // r9d
  unsigned int v813; // r9d
  UINT v814; // ecx
  UINT v815; // edx
  NTSTATUS v816; // eax
  UINT v817; // ecx
  UINT v818; // eax
  UINT v819; // ecx
  PVOID v820; // rax
  int v821; // edx
  _DWORD *v822; // r10
  _DWORD *v823; // rcx
  NTSTATUS v824; // eax
  UINT v825; // edx
  NTSTATUS v826; // eax
  UINT v827; // r9d
  unsigned int v828; // r9d
  UINT v829; // ecx
  UINT v830; // edx
  NTSTATUS v831; // eax
  UINT v832; // ecx
  UINT v833; // eax
  PVOID v834; // rax
  int v835; // edx
  _DWORD *v836; // r10
  _DWORD *v837; // rcx
  int v838; // eax
  int v839; // eax
  int v840; // eax
  unsigned int v841; // r8d
  NTSTATUS v842; // eax
  UINT v843; // edx
  NTSTATUS v844; // eax
  NTSTATUS v845; // eax
  UINT v846; // edx
  int v847; // eax
  int v848; // eax
  int v849; // eax
  int v850; // eax
  int v851; // eax
  int v852; // eax
  int v853; // eax
  int v854; // eax
  int v855; // eax
  NTSTATUS v856; // eax
  UINT v857; // edx
  UINT *v858; // r9
  NTSTATUS v859; // eax
  ULONGLONG v860; // r9
  UINT v861; // r10d
  int v862; // r11d
  int v863; // edx
  _DWORD *v864; // r9
  int *v865; // rcx
  PVOID v866; // rax
  int v867; // edx
  _DWORD *v868; // r10
  int *v869; // rcx
  __int64 v870; // rbx
  int v871; // ebx
  NTSTATUS v872; // eax
  unsigned int *v873; // rdx
  unsigned int v874; // r8d
  unsigned int v875; // eax
  NTSTATUS v876; // eax
  UINT v877; // edx
  NTSTATUS v878; // eax
  NTSTATUS v879; // eax
  UINT v880; // edx
  NTSTATUS v881; // eax
  NTSTATUS v882; // eax
  UINT v883; // edx
  NTSTATUS v884; // eax
  NTSTATUS v885; // eax
  UINT v886; // edx
  UINT v887; // r9d
  int v888; // edx
  char v889; // r8
  int v890; // eax
  ULONGLONG v891; // rdx
  unsigned __int8 *v892; // rax
  unsigned __int8 *v893; // r12
  int v894; // edi
  unsigned __int8 v895; // cl
  int v896; // eax
  int v897; // eax
  unsigned int v898; // r11d
  int v899; // eax
  int v900; // eax
  int v901; // [rsp+50h] [rbp-B0h]
  NTSTATUS v902; // [rsp+50h] [rbp-B0h]
  NTSTATUS Acl; // [rsp+50h] [rbp-B0h]
  int v904; // [rsp+50h] [rbp-B0h]
  unsigned int v905; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE Size[12]; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID v907; // [rsp+68h] [rbp-98h]
  PVOID v908; // [rsp+70h] [rbp-90h]
  PVOID v909; // [rsp+78h] [rbp-88h]
  PVOID v910; // [rsp+80h] [rbp-80h]
  void *v911; // [rsp+88h] [rbp-78h]
  _QWORD v912[2]; // [rsp+90h] [rbp-70h] BYREF
  UINT v913; // [rsp+A0h] [rbp-60h]
  unsigned int v914; // [rsp+A4h] [rbp-5Ch]
  UINT v915; // [rsp+A8h] [rbp-58h]
  int v916; // [rsp+ACh] [rbp-54h]
  UINT uAugend; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v918; // [rsp+B4h] [rbp-4Ch] BYREF
  UINT v919; // [rsp+B8h] [rbp-48h] BYREF
  PVOID P; // [rsp+C0h] [rbp-40h]
  UINT v921; // [rsp+C8h] [rbp-38h]
  UINT v922; // [rsp+CCh] [rbp-34h] BYREF
  UINT v923; // [rsp+D0h] [rbp-30h] BYREF
  UINT v924; // [rsp+D4h] [rbp-2Ch] BYREF
  UINT v925; // [rsp+D8h] [rbp-28h] BYREF
  UINT v926; // [rsp+DCh] [rbp-24h] BYREF
  UINT v927; // [rsp+E0h] [rbp-20h] BYREF
  UINT v928; // [rsp+E4h] [rbp-1Ch] BYREF
  UINT v929; // [rsp+E8h] [rbp-18h] BYREF
  UINT v930; // [rsp+ECh] [rbp-14h] BYREF
  UINT v931; // [rsp+F0h] [rbp-10h] BYREF
  ULONGLONG v932; // [rsp+F8h] [rbp-8h] BYREF
  ULONGLONG v933; // [rsp+100h] [rbp+0h] BYREF
  PVOID v934; // [rsp+108h] [rbp+8h] BYREF
  UINT v935; // [rsp+110h] [rbp+10h]
  UINT v936; // [rsp+114h] [rbp+14h] BYREF
  ULONGLONG v937; // [rsp+118h] [rbp+18h] BYREF
  UINT v938; // [rsp+120h] [rbp+20h]
  unsigned int v939; // [rsp+124h] [rbp+24h] BYREF
  ULONGLONG v940; // [rsp+128h] [rbp+28h] BYREF
  ULONGLONG v941; // [rsp+130h] [rbp+30h] BYREF
  UINT v942; // [rsp+138h] [rbp+38h] BYREF
  UINT v943; // [rsp+13Ch] [rbp+3Ch] BYREF
  UINT v944; // [rsp+140h] [rbp+40h] BYREF
  UINT v945; // [rsp+144h] [rbp+44h]
  UINT v946; // [rsp+148h] [rbp+48h]
  UINT v947; // [rsp+14Ch] [rbp+4Ch] BYREF
  ULONGLONG v948[2]; // [rsp+150h] [rbp+50h] BYREF
  size_t pcbLength[2]; // [rsp+160h] [rbp+60h] BYREF
  UINT v950; // [rsp+170h] [rbp+70h] BYREF
  UINT v951; // [rsp+174h] [rbp+74h] BYREF
  UINT v952; // [rsp+178h] [rbp+78h] BYREF
  UINT v953; // [rsp+17Ch] [rbp+7Ch] BYREF
  UINT v954; // [rsp+180h] [rbp+80h]
  UINT v955[2]; // [rsp+184h] [rbp+84h] BYREF
  UINT v956; // [rsp+18Ch] [rbp+8Ch]
  ULONGLONG v957; // [rsp+190h] [rbp+90h] BYREF
  ULONGLONG v958; // [rsp+198h] [rbp+98h] BYREF
  UINT v959; // [rsp+1A0h] [rbp+A0h]
  ULONGLONG v960; // [rsp+1A8h] [rbp+A8h] BYREF
  UINT v961; // [rsp+1B0h] [rbp+B0h]
  ULONGLONG v962; // [rsp+1B8h] [rbp+B8h] BYREF
  UINT v963; // [rsp+1C0h] [rbp+C0h]
  ULONGLONG v964; // [rsp+1C8h] [rbp+C8h] BYREF
  int v965; // [rsp+1D0h] [rbp+D0h] BYREF
  ULONGLONG v966; // [rsp+1D8h] [rbp+D8h] BYREF
  UINT v967; // [rsp+1E0h] [rbp+E0h] BYREF
  ULONGLONG v968; // [rsp+1E8h] [rbp+E8h] BYREF
  UINT v969; // [rsp+1F0h] [rbp+F0h]
  ULONGLONG v970; // [rsp+1F8h] [rbp+F8h] BYREF
  UINT v971; // [rsp+200h] [rbp+100h] BYREF
  ULONGLONG v972; // [rsp+208h] [rbp+108h] BYREF
  UINT v973; // [rsp+210h] [rbp+110h]
  ULONGLONG v974; // [rsp+218h] [rbp+118h] BYREF
  UINT v975; // [rsp+220h] [rbp+120h]
  ULONGLONG v976; // [rsp+228h] [rbp+128h] BYREF
  UINT v977; // [rsp+230h] [rbp+130h]
  ULONGLONG v978; // [rsp+238h] [rbp+138h] BYREF
  UINT v979; // [rsp+240h] [rbp+140h] BYREF
  ULONGLONG v980; // [rsp+248h] [rbp+148h] BYREF
  UINT v981; // [rsp+250h] [rbp+150h]
  ULONGLONG v982; // [rsp+258h] [rbp+158h] BYREF
  __int64 v983; // [rsp+260h] [rbp+160h] BYREF
  ULONGLONG v984; // [rsp+268h] [rbp+168h] BYREF
  UINT v985; // [rsp+270h] [rbp+170h]
  ULONGLONG v986; // [rsp+278h] [rbp+178h] BYREF
  int v987; // [rsp+280h] [rbp+180h]
  ULONGLONG v988; // [rsp+288h] [rbp+188h] BYREF
  UINT v989; // [rsp+290h] [rbp+190h]
  ULONGLONG v990; // [rsp+298h] [rbp+198h] BYREF
  UINT v991; // [rsp+2A0h] [rbp+1A0h]
  ULONGLONG v992; // [rsp+2A8h] [rbp+1A8h] BYREF
  UINT v993; // [rsp+2B0h] [rbp+1B0h]
  ULONGLONG v994; // [rsp+2B8h] [rbp+1B8h] BYREF
  UINT v995; // [rsp+2C0h] [rbp+1C0h] BYREF
  ULONGLONG v996; // [rsp+2C8h] [rbp+1C8h] BYREF
  UINT v997; // [rsp+2D0h] [rbp+1D0h]
  ULONGLONG v998; // [rsp+2D8h] [rbp+1D8h] BYREF
  int v999; // [rsp+2E0h] [rbp+1E0h] BYREF
  ULONGLONG pullResult; // [rsp+2E8h] [rbp+1E8h] BYREF
  UINT v1001; // [rsp+2F0h] [rbp+1F0h]
  ULONGLONG v1002; // [rsp+2F8h] [rbp+1F8h] BYREF
  int v1003; // [rsp+300h] [rbp+200h]
  ULONGLONG v1004; // [rsp+308h] [rbp+208h] BYREF
  UINT v1005; // [rsp+310h] [rbp+210h]
  UINT v1006; // [rsp+314h] [rbp+214h]
  int v1007; // [rsp+318h] [rbp+218h]
  UINT v1008; // [rsp+31Ch] [rbp+21Ch]
  unsigned int v1009; // [rsp+320h] [rbp+220h] BYREF
  UINT v1010; // [rsp+324h] [rbp+224h]
  UINT v1011; // [rsp+328h] [rbp+228h]
  int v1012; // [rsp+32Ch] [rbp+22Ch]
  UINT v1013; // [rsp+330h] [rbp+230h]
  UINT v1014; // [rsp+334h] [rbp+234h]
  NTSTATUS v1015; // [rsp+338h] [rbp+238h] BYREF
  UINT v1016; // [rsp+33Ch] [rbp+23Ch]
  unsigned int v1017; // [rsp+340h] [rbp+240h] BYREF
  UINT v1018; // [rsp+344h] [rbp+244h]
  _DWORD v1019[2]; // [rsp+348h] [rbp+248h] BYREF
  UINT v1020[2]; // [rsp+350h] [rbp+250h] BYREF
  int v1021; // [rsp+358h] [rbp+258h] BYREF
  int v1022; // [rsp+360h] [rbp+260h]
  int v1023; // [rsp+368h] [rbp+268h] BYREF
  int v1024; // [rsp+370h] [rbp+270h] BYREF
  unsigned int v1025; // [rsp+378h] [rbp+278h]
  int v1026; // [rsp+380h] [rbp+280h] BYREF
  int v1027; // [rsp+388h] [rbp+288h] BYREF
  UINT v1028; // [rsp+38Ch] [rbp+28Ch]
  UINT v1029; // [rsp+390h] [rbp+290h] BYREF
  UINT v1030; // [rsp+394h] [rbp+294h]
  int v1031; // [rsp+398h] [rbp+298h]
  int v1032; // [rsp+3A0h] [rbp+2A0h] BYREF
  unsigned int v1033; // [rsp+3A8h] [rbp+2A8h] BYREF
  UINT v1034; // [rsp+3B0h] [rbp+2B0h]
  UINT v1035; // [rsp+3B4h] [rbp+2B4h]
  int v1036; // [rsp+3B8h] [rbp+2B8h] BYREF
  int v1037; // [rsp+3C0h] [rbp+2C0h] BYREF
  UINT v1038; // [rsp+3C8h] [rbp+2C8h]
  int v1039; // [rsp+3D0h] [rbp+2D0h] BYREF
  UINT v1040; // [rsp+3D8h] [rbp+2D8h] BYREF
  int v1041; // [rsp+3E0h] [rbp+2E0h] BYREF
  UINT v1042; // [rsp+3E8h] [rbp+2E8h] BYREF
  int v1043; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v1044; // [rsp+3F8h] [rbp+2F8h] BYREF
  UINT v1045; // [rsp+400h] [rbp+300h] BYREF
  unsigned int v1046; // [rsp+404h] [rbp+304h]
  int v1047; // [rsp+408h] [rbp+308h] BYREF
  unsigned int v1048; // [rsp+410h] [rbp+310h]
  UINT v1049; // [rsp+414h] [rbp+314h] BYREF
  UINT v1050; // [rsp+418h] [rbp+318h] BYREF
  UINT v1051; // [rsp+41Ch] [rbp+31Ch] BYREF
  UINT v1052; // [rsp+420h] [rbp+320h] BYREF
  unsigned int v1053; // [rsp+424h] [rbp+324h]
  UINT v1054; // [rsp+428h] [rbp+328h] BYREF
  int v1055; // [rsp+430h] [rbp+330h] BYREF
  int v1056; // [rsp+438h] [rbp+338h] BYREF
  UINT v1057; // [rsp+440h] [rbp+340h] BYREF
  UINT v1058; // [rsp+444h] [rbp+344h] BYREF
  UINT v1059; // [rsp+448h] [rbp+348h] BYREF
  UINT v1060; // [rsp+44Ch] [rbp+34Ch] BYREF
  UINT v1061; // [rsp+450h] [rbp+350h] BYREF
  UINT v1062; // [rsp+454h] [rbp+354h] BYREF
  unsigned int v1063; // [rsp+458h] [rbp+358h]
  UINT v1064; // [rsp+45Ch] [rbp+35Ch]
  int v1065; // [rsp+460h] [rbp+360h] BYREF
  int v1066; // [rsp+468h] [rbp+368h] BYREF
  int v1067; // [rsp+470h] [rbp+370h] BYREF
  UINT v1068; // [rsp+478h] [rbp+378h] BYREF
  int v1069; // [rsp+480h] [rbp+380h] BYREF
  unsigned __int64 v1070; // [rsp+488h] [rbp+388h]
  int v1071; // [rsp+490h] [rbp+390h] BYREF
  unsigned __int64 v1072; // [rsp+498h] [rbp+398h]
  UINT v1073; // [rsp+4A0h] [rbp+3A0h] BYREF
  UINT v1074; // [rsp+4A4h] [rbp+3A4h] BYREF
  UINT v1075; // [rsp+4A8h] [rbp+3A8h]
  int v1076; // [rsp+4B0h] [rbp+3B0h] BYREF
  int v1077; // [rsp+4B8h] [rbp+3B8h] BYREF
  UINT v1078; // [rsp+4C0h] [rbp+3C0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+4C4h] [rbp+3C4h] BYREF
  UINT v1080; // [rsp+4C8h] [rbp+3C8h] BYREF
  ACCESS_MASK v1081; // [rsp+4CCh] [rbp+3CCh] BYREF
  int v1082; // [rsp+4D0h] [rbp+3D0h] BYREF
  UINT v1083; // [rsp+4D8h] [rbp+3D8h] BYREF
  int v1084; // [rsp+4E0h] [rbp+3E0h] BYREF
  ULONGLONG v1085; // [rsp+4E8h] [rbp+3E8h] BYREF
  int v1086; // [rsp+4F0h] [rbp+3F0h] BYREF
  ULONGLONG v1087; // [rsp+4F8h] [rbp+3F8h] BYREF
  UINT v1088; // [rsp+500h] [rbp+400h]
  ULONGLONG v1089; // [rsp+508h] [rbp+408h] BYREF
  SIZE_T NumberOfBytes; // [rsp+510h] [rbp+410h]
  int v1091; // [rsp+518h] [rbp+418h] BYREF
  UINT v1092; // [rsp+520h] [rbp+420h] BYREF
  unsigned int v1093; // [rsp+524h] [rbp+424h]
  unsigned int v1094; // [rsp+528h] [rbp+428h] BYREF
  ACCESS_MASK v1095; // [rsp+530h] [rbp+430h]
  int v1096; // [rsp+538h] [rbp+438h] BYREF
  UINT v1097; // [rsp+540h] [rbp+440h]
  void *v1098; // [rsp+548h] [rbp+448h]
  PVOID v1099; // [rsp+550h] [rbp+450h]
  PCWSTR SourceString; // [rsp+558h] [rbp+458h]
  PVOID v1101; // [rsp+560h] [rbp+460h]
  HANDLE TargetFile; // [rsp+568h] [rbp+468h] BYREF
  UINT v1103; // [rsp+570h] [rbp+470h] BYREF
  ULONGLONG v1104; // [rsp+578h] [rbp+478h] BYREF
  ULONGLONG v1105; // [rsp+580h] [rbp+480h] BYREF
  UINT v1106; // [rsp+588h] [rbp+488h] BYREF
  UINT v1107; // [rsp+58Ch] [rbp+48Ch] BYREF
  UINT v1108; // [rsp+590h] [rbp+490h] BYREF
  HANDLE KeyHandle; // [rsp+598h] [rbp+498h] BYREF
  UINT v1110; // [rsp+5A0h] [rbp+4A0h] BYREF
  UINT v1111; // [rsp+5A4h] [rbp+4A4h] BYREF
  UINT v1112; // [rsp+5A8h] [rbp+4A8h]
  UINT v1113; // [rsp+5ACh] [rbp+4ACh] BYREF
  UINT v1114; // [rsp+5B0h] [rbp+4B0h] BYREF
  int v1115; // [rsp+5B4h] [rbp+4B4h]
  UINT v1116; // [rsp+5B8h] [rbp+4B8h] BYREF
  int v1117; // [rsp+5BCh] [rbp+4BCh]
  unsigned int v1118; // [rsp+5C0h] [rbp+4C0h]
  unsigned int v1119; // [rsp+5C4h] [rbp+4C4h] BYREF
  UINT v1120; // [rsp+5C8h] [rbp+4C8h]
  PVOID v1121; // [rsp+5D0h] [rbp+4D0h]
  int v1122; // [rsp+5D8h] [rbp+4D8h]
  UINT v1123; // [rsp+5DCh] [rbp+4DCh]
  UINT v1124; // [rsp+5E0h] [rbp+4E0h] BYREF
  int v1125; // [rsp+5E4h] [rbp+4E4h]
  UINT v1126; // [rsp+5E8h] [rbp+4E8h] BYREF
  UINT v1127; // [rsp+5ECh] [rbp+4ECh] BYREF
  int v1128; // [rsp+5F0h] [rbp+4F0h]
  ULONG v1129; // [rsp+5F4h] [rbp+4F4h] BYREF
  UINT v1130; // [rsp+5F8h] [rbp+4F8h] BYREF
  int v1131; // [rsp+5FCh] [rbp+4FCh]
  int v1132; // [rsp+600h] [rbp+500h]
  int v1133; // [rsp+604h] [rbp+504h]
  UINT v1134; // [rsp+608h] [rbp+508h]
  unsigned int v1135; // [rsp+60Ch] [rbp+50Ch]
  UINT v1136; // [rsp+610h] [rbp+510h] BYREF
  UINT uAddend; // [rsp+614h] [rbp+514h] BYREF
  UINT v1138; // [rsp+618h] [rbp+518h] BYREF
  int v1139; // [rsp+61Ch] [rbp+51Ch]
  NTSTATUS v1140; // [rsp+620h] [rbp+520h] BYREF
  UINT v1141; // [rsp+624h] [rbp+524h] BYREF
  ULONG v1142; // [rsp+628h] [rbp+528h] BYREF
  UINT v1143; // [rsp+62Ch] [rbp+52Ch] BYREF
  NTSTATUS v1144; // [rsp+630h] [rbp+530h] BYREF
  UINT v1145; // [rsp+634h] [rbp+534h] BYREF
  ULONG v1146; // [rsp+638h] [rbp+538h] BYREF
  int v1147; // [rsp+63Ch] [rbp+53Ch]
  NTSTATUS AccessStatus; // [rsp+640h] [rbp+540h] BYREF
  int v1149; // [rsp+644h] [rbp+544h]
  ULONG v1150; // [rsp+648h] [rbp+548h] BYREF
  int v1151; // [rsp+64Ch] [rbp+54Ch] BYREF
  int v1152; // [rsp+650h] [rbp+550h]
  int v1153; // [rsp+654h] [rbp+554h]
  int v1154; // [rsp+658h] [rbp+558h]
  UINT v1155; // [rsp+65Ch] [rbp+55Ch] BYREF
  int v1156; // [rsp+660h] [rbp+560h]
  UINT v1157; // [rsp+664h] [rbp+564h] BYREF
  int v1158; // [rsp+668h] [rbp+568h]
  UINT v1159; // [rsp+66Ch] [rbp+56Ch] BYREF
  NTSTATUS v1160; // [rsp+670h] [rbp+570h]
  UINT v1161; // [rsp+674h] [rbp+574h] BYREF
  KPROCESSOR_MODE v1162[4]; // [rsp+678h] [rbp+578h]
  int v1163; // [rsp+67Ch] [rbp+57Ch]
  UINT v1164; // [rsp+680h] [rbp+580h] BYREF
  UINT v1165; // [rsp+684h] [rbp+584h] BYREF
  UINT v1166; // [rsp+688h] [rbp+588h] BYREF
  UINT v1167; // [rsp+68Ch] [rbp+58Ch] BYREF
  int v1168; // [rsp+690h] [rbp+590h]
  int v1169; // [rsp+694h] [rbp+594h]
  int v1170; // [rsp+698h] [rbp+598h]
  int v1171; // [rsp+69Ch] [rbp+59Ch] BYREF
  int v1172; // [rsp+6A0h] [rbp+5A0h]
  UINT v1173; // [rsp+6A4h] [rbp+5A4h] BYREF
  UINT v1174; // [rsp+6A8h] [rbp+5A8h] BYREF
  unsigned int v1175; // [rsp+6ACh] [rbp+5ACh]
  int SystemInformation; // [rsp+6B0h] [rbp+5B0h] BYREF
  int v1177; // [rsp+6B4h] [rbp+5B4h]
  UINT v1178; // [rsp+6B8h] [rbp+5B8h] BYREF
  ULONGLONG v1179; // [rsp+6C0h] [rbp+5C0h] BYREF
  UINT v1180; // [rsp+6C8h] [rbp+5C8h] BYREF
  ULONGLONG v1181; // [rsp+6D0h] [rbp+5D0h] BYREF
  UINT v1182; // [rsp+6D8h] [rbp+5D8h] BYREF
  UINT v1183; // [rsp+6E8h] [rbp+5E8h] BYREF
  ULONGLONG v1184; // [rsp+6F0h] [rbp+5F0h] BYREF
  UINT v1185; // [rsp+6F8h] [rbp+5F8h]
  ULONGLONG v1186; // [rsp+700h] [rbp+600h] BYREF
  unsigned int v1187; // [rsp+708h] [rbp+608h]
  ULONGLONG v1188; // [rsp+710h] [rbp+610h] BYREF
  UINT v1189; // [rsp+718h] [rbp+618h] BYREF
  LARGE_INTEGER Interval; // [rsp+720h] [rbp+620h] BYREF
  UINT v1191; // [rsp+728h] [rbp+628h] BYREF
  ULONGLONG v1192; // [rsp+730h] [rbp+630h] BYREF
  UINT v1193; // [rsp+738h] [rbp+638h] BYREF
  LARGE_INTEGER v1194; // [rsp+740h] [rbp+640h] BYREF
  int v1195; // [rsp+748h] [rbp+648h]
  ULONGLONG v1196; // [rsp+750h] [rbp+650h] BYREF
  int v1197; // [rsp+758h] [rbp+658h] BYREF
  int v1198; // [rsp+760h] [rbp+660h] BYREF
  int v1199; // [rsp+764h] [rbp+664h]
  UINT puResult; // [rsp+768h] [rbp+668h] BYREF
  int v1201; // [rsp+770h] [rbp+670h] BYREF
  int v1202; // [rsp+774h] [rbp+674h]
  UINT v1203; // [rsp+778h] [rbp+678h] BYREF
  int v1204; // [rsp+780h] [rbp+680h] BYREF
  int v1205; // [rsp+784h] [rbp+684h]
  unsigned int v1206; // [rsp+788h] [rbp+688h]
  ULONGLONG v1207; // [rsp+790h] [rbp+690h] BYREF
  UINT v1208; // [rsp+798h] [rbp+698h] BYREF
  ULONGLONG v1209; // [rsp+7A0h] [rbp+6A0h] BYREF
  int v1210; // [rsp+7A8h] [rbp+6A8h]
  ULONGLONG v1211; // [rsp+7B0h] [rbp+6B0h] BYREF
  UINT v1212; // [rsp+7B8h] [rbp+6B8h] BYREF
  ULONGLONG v1213; // [rsp+7C0h] [rbp+6C0h] BYREF
  int v1214; // [rsp+7C8h] [rbp+6C8h]
  ULONGLONG v1215; // [rsp+7D0h] [rbp+6D0h] BYREF
  UINT v1216; // [rsp+7D8h] [rbp+6D8h] BYREF
  UINT v1217; // [rsp+7DCh] [rbp+6DCh] BYREF
  int v1218; // [rsp+7E0h] [rbp+6E0h]
  ULONG ReturnLength; // [rsp+7E4h] [rbp+6E4h] BYREF
  UINT v1220; // [rsp+7E8h] [rbp+6E8h] BYREF
  UINT v1221; // [rsp+7ECh] [rbp+6ECh] BYREF
  int v1222; // [rsp+7F0h] [rbp+6F0h] BYREF
  UINT v1223; // [rsp+7F4h] [rbp+6F4h] BYREF
  UINT v1224; // [rsp+7F8h] [rbp+6F8h] BYREF
  UINT v1225; // [rsp+7FCh] [rbp+6FCh] BYREF
  int v1226; // [rsp+804h] [rbp+704h]
  UINT v1227; // [rsp+808h] [rbp+708h] BYREF
  unsigned int v1228; // [rsp+80Ch] [rbp+70Ch]
  unsigned int v1229; // [rsp+810h] [rbp+710h]
  UINT v1230; // [rsp+814h] [rbp+714h] BYREF
  UINT v1231; // [rsp+818h] [rbp+718h] BYREF
  UINT v1232; // [rsp+81Ch] [rbp+71Ch]
  int v1233; // [rsp+820h] [rbp+720h]
  UINT v1234; // [rsp+824h] [rbp+724h] BYREF
  int v1235; // [rsp+828h] [rbp+728h] BYREF
  UINT v1236; // [rsp+82Ch] [rbp+72Ch] BYREF
  int v1237; // [rsp+830h] [rbp+730h]
  size_t v1238; // [rsp+838h] [rbp+738h] BYREF
  UINT v1239; // [rsp+840h] [rbp+740h] BYREF
  size_t v1240; // [rsp+848h] [rbp+748h] BYREF
  int v1241; // [rsp+850h] [rbp+750h]
  UINT v1242; // [rsp+854h] [rbp+754h] BYREF
  UINT v1243; // [rsp+858h] [rbp+758h] BYREF
  UINT v1244; // [rsp+85Ch] [rbp+75Ch] BYREF
  ULONGLONG v1245; // [rsp+860h] [rbp+760h]
  unsigned __int64 v1246; // [rsp+868h] [rbp+768h] BYREF
  __int64 v1247; // [rsp+870h] [rbp+770h] BYREF
  unsigned __int64 v1248; // [rsp+878h] [rbp+778h]
  unsigned __int64 v1249; // [rsp+880h] [rbp+780h]
  __int64 v1250; // [rsp+888h] [rbp+788h] BYREF
  unsigned __int64 v1251; // [rsp+890h] [rbp+790h] BYREF
  unsigned __int64 v1252; // [rsp+898h] [rbp+798h]
  STRSAFE_PCNZWCH psz; // [rsp+8A0h] [rbp+7A0h]
  __int64 v1254; // [rsp+8A8h] [rbp+7A8h] BYREF
  _DWORD v1255[2]; // [rsp+8B0h] [rbp+7B0h] BYREF
  unsigned __int64 Source2; // [rsp+8B8h] [rbp+7B8h] BYREF
  wchar_t *v1257; // [rsp+8C0h] [rbp+7C0h]
  __int64 v1258; // [rsp+8C8h] [rbp+7C8h] BYREF
  ULONGLONG v1259; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v1260; // [rsp+8D8h] [rbp+7D8h]
  __int64 v1261; // [rsp+8E0h] [rbp+7E0h] BYREF
  __int64 v1262; // [rsp+8E8h] [rbp+7E8h] BYREF
  wchar_t *v1263; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v1264; // [rsp+8F8h] [rbp+7F8h]
  LARGE_INTEGER Timeout; // [rsp+900h] [rbp+800h] BYREF
  HANDLE Handle; // [rsp+908h] [rbp+808h]
  __int64 v1267; // [rsp+910h] [rbp+810h] BYREF
  UNICODE_STRING DestinationString; // [rsp+918h] [rbp+818h] BYREF
  __int64 v1269; // [rsp+928h] [rbp+828h]
  ACCESS_MASK v1270; // [rsp+930h] [rbp+830h] BYREF
  ACCESS_MASK v1271[5]; // [rsp+934h] [rbp+834h] BYREF
  const void *v1272; // [rsp+948h] [rbp+848h]
  UINT v1273; // [rsp+950h] [rbp+850h]
  _QWORD *v1274; // [rsp+958h] [rbp+858h]
  void *v1275; // [rsp+960h] [rbp+860h]
  __int64 v1276; // [rsp+968h] [rbp+868h]
  _QWORD *v1277; // [rsp+970h] [rbp+870h]
  unsigned __int64 v1278; // [rsp+978h] [rbp+878h]
  _QWORD *v1279; // [rsp+980h] [rbp+880h]
  void *v1280; // [rsp+988h] [rbp+888h]
  _QWORD *v1281; // [rsp+990h] [rbp+890h]
  int *v1282; // [rsp+998h] [rbp+898h]
  void **v1283; // [rsp+9A0h] [rbp+8A0h]
  int *v1284; // [rsp+9A8h] [rbp+8A8h]
  _DWORD *v1285; // [rsp+9B0h] [rbp+8B0h]
  _QWORD *v1286; // [rsp+9B8h] [rbp+8B8h]
  _QWORD *v1287; // [rsp+9C0h] [rbp+8C0h]
  _DWORD *v1288; // [rsp+9C8h] [rbp+8C8h]
  _QWORD *v1289; // [rsp+9D0h] [rbp+8D0h]
  char v1290[8]; // [rsp+9D8h] [rbp+8D8h] BYREF
  void *v1291; // [rsp+9E0h] [rbp+8E0h]
  void *v1292; // [rsp+9E8h] [rbp+8E8h]
  PVOID v1293; // [rsp+9F0h] [rbp+8F0h] BYREF
  _DWORD *v1294; // [rsp+9F8h] [rbp+8F8h]
  _QWORD *v1295; // [rsp+A00h] [rbp+900h]
  int v1296; // [rsp+A08h] [rbp+908h]
  ULONGLONG v1297; // [rsp+A10h] [rbp+910h]
  _QWORD *v1298; // [rsp+A18h] [rbp+918h]
  __int64 v1299; // [rsp+A20h] [rbp+920h]
  int v1300; // [rsp+A28h] [rbp+928h]
  void *v1301; // [rsp+A30h] [rbp+930h]
  void *Src; // [rsp+A38h] [rbp+938h]
  PVOID Object; // [rsp+A40h] [rbp+940h] BYREF
  _DWORD *v1304; // [rsp+A48h] [rbp+948h]
  UINT *v1305; // [rsp+A50h] [rbp+950h]
  _DWORD *v1306; // [rsp+A58h] [rbp+958h]
  void **v1307; // [rsp+A60h] [rbp+960h]
  __int64 v1308; // [rsp+A68h] [rbp+968h]
  __int64 v1309; // [rsp+A70h] [rbp+970h]
  __int64 v1310; // [rsp+A78h] [rbp+978h]
  void **v1311; // [rsp+A80h] [rbp+980h]
  _QWORD *v1312; // [rsp+A88h] [rbp+988h]
  __int64 v1313; // [rsp+A90h] [rbp+990h]
  UINT *v1314; // [rsp+A98h] [rbp+998h]
  __int64 v1315; // [rsp+AA0h] [rbp+9A0h]
  const void *v1316; // [rsp+AA8h] [rbp+9A8h]
  NTSTATUS *v1317; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1318; // [rsp+AB8h] [rbp+9B8h]
  __int128 v1319; // [rsp+AC0h] [rbp+9C0h] BYREF
  ULONGLONG v1320[2]; // [rsp+AD8h] [rbp+9D8h] BYREF
  ULONGLONG v1321[3]; // [rsp+AE8h] [rbp+9E8h] BYREF
  ULONGLONG v1322[2]; // [rsp+B00h] [rbp+A00h] BYREF
  ULONGLONG v1323[2]; // [rsp+B10h] [rbp+A10h] BYREF
  ULONGLONG v1324[2]; // [rsp+B20h] [rbp+A20h] BYREF
  ULONGLONG v1325[2]; // [rsp+B30h] [rbp+A30h] BYREF
  ULONGLONG v1326[2]; // [rsp+B40h] [rbp+A40h] BYREF
  ULONGLONG v1327[2]; // [rsp+B50h] [rbp+A50h] BYREF
  ULONGLONG v1328[2]; // [rsp+B60h] [rbp+A60h] BYREF
  ULONGLONG v1329[2]; // [rsp+B70h] [rbp+A70h] BYREF
  ULONGLONG v1330[2]; // [rsp+B80h] [rbp+A80h] BYREF
  ULONGLONG v1331[2]; // [rsp+B90h] [rbp+A90h] BYREF
  ULONGLONG v1332[2]; // [rsp+BA0h] [rbp+AA0h] BYREF
  ULONGLONG v1333[2]; // [rsp+BB0h] [rbp+AB0h] BYREF
  ULONGLONG v1334[2]; // [rsp+BC0h] [rbp+AC0h] BYREF
  ULONGLONG v1335[2]; // [rsp+BD0h] [rbp+AD0h] BYREF
  ULONGLONG v1336[2]; // [rsp+BE0h] [rbp+AE0h] BYREF
  ULONGLONG v1337[2]; // [rsp+BF0h] [rbp+AF0h] BYREF
  ULONGLONG v1338[2]; // [rsp+C00h] [rbp+B00h] BYREF
  ULONGLONG v1339[2]; // [rsp+C10h] [rbp+B10h] BYREF
  ULONGLONG v1340[2]; // [rsp+C20h] [rbp+B20h] BYREF
  ULONGLONG v1341[2]; // [rsp+C30h] [rbp+B30h] BYREF
  ULONGLONG v1342[2]; // [rsp+C40h] [rbp+B40h] BYREF
  ULONGLONG v1343[2]; // [rsp+C50h] [rbp+B50h] BYREF
  ULONGLONG v1344[2]; // [rsp+C60h] [rbp+B60h] BYREF
  ULONGLONG v1345[2]; // [rsp+C70h] [rbp+B70h] BYREF
  ULONGLONG v1346[2]; // [rsp+C80h] [rbp+B80h] BYREF
  ULONGLONG v1347[2]; // [rsp+C90h] [rbp+B90h] BYREF
  ULONGLONG v1348[2]; // [rsp+CA0h] [rbp+BA0h] BYREF
  ULONGLONG v1349; // [rsp+CB0h] [rbp+BB0h] BYREF
  UNICODE_STRING v1350; // [rsp+CB8h] [rbp+BB8h] BYREF
  ULONGLONG v1351[2]; // [rsp+CD0h] [rbp+BD0h] BYREF
  ULONGLONG v1352; // [rsp+CE0h] [rbp+BE0h] BYREF
  UNICODE_STRING v1353; // [rsp+CE8h] [rbp+BE8h] BYREF
  ULONGLONG v1354[2]; // [rsp+D00h] [rbp+C00h] BYREF
  ULONGLONG v1355[2]; // [rsp+D10h] [rbp+C10h] BYREF
  ULONGLONG v1356[2]; // [rsp+D20h] [rbp+C20h] BYREF
  ULONGLONG v1357[2]; // [rsp+D30h] [rbp+C30h] BYREF
  ULONGLONG v1358[2]; // [rsp+D40h] [rbp+C40h] BYREF
  ULONGLONG v1359; // [rsp+D60h] [rbp+C60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v1360; // [rsp+D68h] [rbp+C68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+D88h] [rbp+C88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+DA8h] [rbp+CA8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v1363; // [rsp+DC8h] [rbp+CC8h] BYREF
  _BYTE v1364[40]; // [rsp+DE8h] [rbp+CE8h] BYREF
  _BYTE v1365[40]; // [rsp+E10h] [rbp+D10h] BYREF
  _BYTE v1366[40]; // [rsp+E38h] [rbp+D38h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+E60h] [rbp+D60h] BYREF
  __int64 v1368; // [rsp+E88h] [rbp+D88h] BYREF
  unsigned __int16 v1369[8]; // [rsp+E90h] [rbp+D90h] BYREF
  __int128 v1370; // [rsp+EA0h] [rbp+DA0h] BYREF
  __int128 v1371; // [rsp+EB0h] [rbp+DB0h] BYREF
  int v1372; // [rsp+EC0h] [rbp+DC0h] BYREF
  __int64 v1373; // [rsp+EC4h] [rbp+DC4h]

  v1314 = a5;
  v5 = 0LL;
  v1312 = a4;
  v935 = a3;
  v6 = 0LL;
  v907 = 0LL;
  v7 = 0LL;
  v909 = 0LL;
  v8 = 0LL;
  v1012 = 0;
  v9 = 0LL;
  memset(v912, 0, sizeof(v912));
  v905 = 0;
  memset(Size, 0, sizeof(Size));
  v910 = 0LL;
  v921 = 0;
  v1248 = 0LL;
  v908 = 0LL;
  v911 = 0LL;
  v1272 = 0LL;
  v1175 = 0;
  v1316 = 0LL;
  v1229 = 0;
  v932 = 0LL;
  if ( a2 < 4 )
  {
    v193 = -1073741762;
    goto LABEL_387;
  }
  v10 = *a1;
  v11 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
  {
    v193 = -1073741675;
    v7 = 0LL;
    goto LABEL_387;
  }
  if ( a2 - 4 < (unsigned int)v10 )
  {
    v7 = 0LL;
    v193 = -1073741762;
    goto LABEL_387;
  }
  v12 = (unsigned int *)&v11[v10];
  if ( &v11[v10] < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
  {
    v193 = -1073741675;
    v7 = 0LL;
    goto LABEL_387;
  }
  if ( a2 - ((_DWORD)v10 + 4) < 4 )
  {
    v7 = 0LL;
    v193 = -1073741762;
    goto LABEL_387;
  }
  v13 = *v12;
  v14 = (char *)(v12 + 1);
  if ( v12 + 1 < v12 )
    goto LABEL_2276;
  v15 = v10 + 8;
  if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
    goto LABEL_2276;
  if ( a2 - v15 < (unsigned int)v13 )
  {
    v9 = 0LL;
    v193 = -1073741762;
    v6 = 0LL;
    v7 = 0LL;
    goto LABEL_387;
  }
  v16 = (unsigned int *)&v14[v13];
  if ( &v14[v13] < v14 || (v17 = v13 + v15, (unsigned int)v13 + v15 < v15) )
  {
LABEL_2276:
    v193 = -1073741675;
    v9 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    goto LABEL_387;
  }
  if ( a2 - v17 < 4 )
  {
    v9 = 0LL;
    v193 = -1073741762;
    v6 = 0LL;
    v7 = 0LL;
    goto LABEL_387;
  }
  v18 = *v16;
  v19 = v16 + 1;
  if ( v16 + 1 < v16 )
    goto LABEL_2275;
  v20 = v17 + 4;
  if ( v17 + 4 < v17 )
    goto LABEL_2275;
  if ( a2 - v20 < (unsigned int)v18 )
  {
LABEL_789:
    v9 = 0LL;
    v193 = -1073741762;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_387;
  }
  if ( (unsigned int)v18 + v20 < v20 )
  {
LABEL_2275:
    v193 = -1073741675;
    v9 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_387;
  }
  if ( a2 != (_DWORD)v18 + v20 || (unsigned int)(v10 + v18 + v13) + 12LL != a2 )
    goto LABEL_789;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  v22 = (ULONGLONG)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    v901 = 0;
    if ( v11 )
    {
      *(_DWORD *)v22 = v10;
      if ( !(_DWORD)v10 )
      {
        v901 = -1073741762;
        LODWORD(v11) = 0;
LABEL_794:
        v432 = *(void **)(v22 + 8);
        if ( v432 )
        {
          ExFreePoolWithTag(v432, 0x20534C53u);
          *(_QWORD *)(v22 + 8) = 0LL;
        }
        v433 = *(void **)(v22 + 24);
        if ( v433 )
        {
          ExFreePoolWithTag(v433, 0x20534C53u);
          *(_QWORD *)(v22 + 24) = 0LL;
        }
        v434 = *(void **)(v22 + 40);
        if ( v434 )
        {
          ExFreePoolWithTag(v434, 0x20534C53u);
          *(_QWORD *)(v22 + 40) = 0LL;
        }
        ExFreePoolWithTag((PVOID)v22, 0x20534C53u);
        v22 = v932;
        goto LABEL_32;
      }
      v23 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x20534C53u);
      if ( !v23 )
      {
        LODWORD(v11) = 0;
        goto LABEL_793;
      }
      *(_QWORD *)(v22 + 8) = v23;
      v901 = 0;
      memmove(v23, v11, (unsigned int)v10);
      LODWORD(v11) = 0;
    }
    else
    {
      *(_DWORD *)v22 = 0;
      *(_QWORD *)(v22 + 8) = 0LL;
    }
    if ( v14 )
    {
      *(_DWORD *)(v22 + 16) = v13;
      if ( !(_DWORD)v13 )
      {
        v901 = -1073741762;
        goto LABEL_794;
      }
      v24 = ExAllocatePoolWithTag(PagedPool, v13, 0x20534C53u);
      if ( !v24 )
        goto LABEL_793;
      *(_QWORD *)(v22 + 24) = v24;
      v901 = 0;
      memmove(v24, v14, v13);
    }
    else
    {
      *(_DWORD *)(v22 + 16) = 0;
      *(_QWORD *)(v22 + 24) = 0LL;
    }
    if ( !v19 )
    {
      *(_DWORD *)(v22 + 32) = 0;
      *(_QWORD *)(v22 + 40) = 0LL;
      goto LABEL_32;
    }
    *(_DWORD *)(v22 + 32) = v18;
    if ( !(_DWORD)v18 )
    {
      v901 = -1073741762;
      goto LABEL_794;
    }
    v25 = ExAllocatePoolWithTag(PagedPool, v18, 0x20534C53u);
    if ( v25 )
    {
      *(_QWORD *)(v22 + 40) = v25;
      v901 = 0;
      memmove(v25, v19, v18);
LABEL_32:
      v26 = v901;
      goto LABEL_33;
    }
LABEL_793:
    v901 = -1073741801;
    goto LABEL_794;
  }
  v22 = v932;
  v26 = -1073741801;
  v901 = -1073741801;
  LODWORD(v11) = 0;
LABEL_33:
  if ( v26 < 0 )
  {
    if ( v22 )
    {
      v435 = *(void **)(v22 + 8);
      if ( v435 )
      {
        ExFreePoolWithTag(v435, 0x20534C53u);
        *(_QWORD *)(v22 + 8) = 0LL;
      }
      v436 = *(void **)(v22 + 24);
      if ( v436 )
      {
        ExFreePoolWithTag(v436, 0x20534C53u);
        *(_QWORD *)(v22 + 24) = 0LL;
      }
      v437 = *(void **)(v22 + 40);
      if ( v437 )
      {
        ExFreePoolWithTag(v437, 0x20534C53u);
        *(_QWORD *)(v22 + 40) = 0LL;
      }
      ExFreePoolWithTag((PVOID)v22, 0x20534C53u);
      v26 = v901;
    }
    v6 = (unsigned int *)v907;
  }
  else
  {
    v6 = (unsigned int *)v22;
    v907 = (PVOID)v22;
  }
  if ( v26 < 0 )
  {
    v7 = (UINT *)v909;
    goto LABEL_845;
  }
  v1245 = 0LL;
  v27 = 0LL;
  v1098 = 0LL;
  v901 = 0;
  if ( !v6 || !*((_QWORD *)v6 + 1) || !*v6 || !*((_QWORD *)v6 + 5) || !v6[8] || !*((_QWORD *)v6 + 3) || !v6[4] )
  {
    v9 = (unsigned int *)v908;
    v7 = (UINT *)v908;
    v193 = -1073741811;
    v8 = (unsigned __int64)v908;
    goto LABEL_418;
  }
  v1245 = *v6;
  v28 = (unsigned __int8 *)*((_QWORD *)v6 + 1);
  v29 = *((_QWORD *)v6 + 3);
  v30 = (__int64 *)*((_QWORD *)v6 + 5);
  v31 = *v6;
  v948[0] = v29;
  v1085 = (ULONGLONG)v28;
  if ( !v28 || !v31 || !v29 || !v30 || v6[8] != 8 || v6[4] != 160 )
    goto LABEL_839;
  v32 = *v30;
  v33 = v31 - 8;
  LOBYTE(v918) = 0;
  v937 = v31 - 8;
  v34 = ExAllocatePoolWithTag(PagedPool, v31 - 8, 0x20534C53u);
  v934 = v34;
  v35 = (char *)v34;
  if ( !v34 )
  {
    v27 = v1098;
    goto LABEL_839;
  }
  v1368 = v32;
  v36 = v34;
  v37 = v33 & 7;
  if ( !v37 )
  {
    uAugend = -1;
    v38 = 0;
    v915 = 0;
    v919 = 0;
LABEL_52:
    v913 = (unsigned int)v11;
    goto LABEL_53;
  }
  v438 = 0;
  v915 = 0;
  v439 = -1;
  v913 = -1;
  uAugend = 0;
  v440 = 0;
  v919 = 0;
  v441 = 0;
  v442 = 0;
  v443 = 56;
  do
  {
    v444 = *v28;
    if ( v442 >= 4 )
      v440 |= v444 << v443;
    else
      v441 |= v444 << (v443 - 32);
    ++v28;
    ++v442;
    v443 -= 8;
  }
  while ( v442 < v37 );
  v919 = v441;
  uAugend = v440;
  v445 = (unsigned __int8 *)(v29 + 158);
  v932 = 30LL;
  v446 = 16LL;
  v940 = v29 + 158;
  v447 = (unsigned __int8 *)(v29 + 126);
  v933 = 16LL;
  v448 = 30;
  do
  {
    v449 = v445[1];
    if ( v449 < 0x1Fu )
    {
      v450 = funcs_140466E74[v449](v448 + 1, *(v447 - 2), *(v447 - 1), *v447, v447[1], (__int64)&v1368, v438);
      v438 = v915;
      v439 = v450 ^ v913;
      v445 = (unsigned __int8 *)v940;
      v446 = v933;
      v913 = v439;
    }
    if ( *v445 < 0x1Fu )
    {
      v451 = funcs_140466E74[*v445](v448, *(v447 - 6), *(v447 - 5), *(v447 - 4), *(v447 - 3), (__int64)&v1368, v439);
      v439 = v913;
      v438 = v451 ^ v915;
      v445 = (unsigned __int8 *)v940;
      v446 = v933;
      v915 = v438;
    }
    v445 -= 2;
    v448 -= 2;
    v447 -= 8;
    v940 = (ULONGLONG)v445;
    v933 = --v446;
  }
  while ( v446 );
  v452 = v919 ^ v438;
  v453 = uAugend ^ v439;
  v454 = 0;
  v29 = v948[0];
  v915 = v452;
  v913 = v453;
  do
  {
    if ( v454 >= 4 )
    {
      v453 = __ROL4__(v453, 8);
      *v36 = v453;
    }
    else
    {
      v452 = __ROL4__(v452, 8);
      *v36 = v452;
    }
    ++v36;
    ++v454;
  }
  while ( v454 < v37 );
  v38 = v915;
  LODWORD(v32) = v1368;
  v455 = v37 - 4;
  v35 = (char *)v934;
  if ( v37 - 4 > 0 )
  {
    LODWORD(v11) = v913 >> (8 * (4 - v455)) << (8 * (4 - v455));
    goto LABEL_52;
  }
  v913 = 0;
  LODWORD(v11) = 0;
  if ( v455 < 0 )
  {
    v38 = v915 >> (-8 * v455) << (-8 * v455);
    v915 = v38;
  }
LABEL_53:
  v39 = v937;
  v932 = v937 >> 3;
  if ( v937 >> 3 )
  {
    v40 = v29 + 158;
    v41 = (unsigned __int8 *)(v29 + 126);
    v1087 = (ULONGLONG)v41;
    v42 = v28 + 2;
    v43 = v36 + 7;
    v1089 = v40;
    while ( 1 )
    {
      v44 = v42[2] << 8;
      v45 = v42[3];
      v46 = (v42[1] | ((*v42 | ((*(v42 - 1) | (*(v42 - 2) << 8)) << 8)) << 8)) ^ v38;
      v936 = v42[1] | ((*v42 | ((*(v42 - 1) | (*(v42 - 2) << 8)) << 8)) << 8);
      v47 = v42[5] | ((v42[4] | ((v45 | v44) << 8)) << 8);
      v948[0] = (ULONGLONG)(v42 + 8);
      v953 = v47;
      v48 = v46 ^ v32 ^ HIDWORD(v1368) ^ v47 ^ (unsigned int)v11;
      v49 = (unsigned __int16)v32;
      v50 = (v48 >> 8) ^ (WORD2(v1368) * (WORD1(v1368) ^ v48)) ^ v46;
      v51 = (WORD1(v1368) * __ROR4__(HIDWORD(v1368) - v50, 11) - __ROR4__(v50, 12)) ^ v48;
      v52 = ((unsigned __int16)v32 * __ROL4__(HIDWORD(v1368) ^ v51, 8) - __ROL4__(v51, 2)) ^ v50;
      v53 = __ROR4__(v52, 9) ^ (HIWORD(v1368) * __ROR4__(v52 - v32, 4)) ^ v51;
      v54 = (__ROR4__(v53, 4) + WORD2(v1368) * __ROR4__(v32 - v53, 10)) ^ v52;
      v55 = (WORD1(v1368) * __ROL4__(HIWORD(v1368) ^ v54, 4) - __ROR4__(v54, 16)) ^ v53;
      v56 = ((unsigned __int16)v32 * (WORD1(v1368) ^ v55) - __ROR4__(v55, 7)) ^ v54;
      v57 = (v56 - v32 - HIWORD(v1368)) ^ v55;
      v58 = __ROR4__(v57, 11) ^ (WORD2(v1368) * __ROR4__(v32 - v57, 9)) ^ v56;
      v59 = (unsigned __int8 *)v40;
      v60 = 30;
      v61 = 16LL;
      v62 = (WORD1(v1368) * (v58 - WORD2(v1368)) - (v58 >> 13)) ^ v57;
      v913 = v62;
      v63 = (v62 >> 15) ^ (v49 * __ROL4__(v62 - WORD2(v1368), 3)) ^ v58;
      v915 = v63;
      do
      {
        v64 = v59[1];
        if ( v64 < 0x1Fu )
        {
          v67 = funcs_140466E74[v64](v60 + 1, *(v41 - 2), *(v41 - 1), *v41, v41[1], (__int64)&v1368, v63);
          v63 = v915;
          v62 = v67 ^ v913;
          v913 ^= v67;
        }
        if ( *v59 < 0x1Fu )
        {
          v66 = funcs_140466E74[*v59](v60, *(v41 - 6), *(v41 - 5), *(v41 - 4), *(v41 - 3), (__int64)&v1368, v62);
          v62 = v913;
          v63 = v66 ^ v915;
          v915 ^= v66;
        }
        v60 -= 2;
        v41 -= 8;
        v59 -= 2;
        --v61;
      }
      while ( v61 );
      v913 = uAugend ^ v62;
      v915 = v919 ^ v63;
      *(v43 - 4) = v919 ^ v63;
      v915 = __ROR4__(v915, 8);
      *v43 = v913;
      v913 = __ROR4__(v913, 8);
      *(v43 - 5) = v915;
      v915 = __ROR4__(v915, 8);
      *(v43 - 1) = v913;
      v913 = __ROR4__(v913, 8);
      *(v43 - 6) = v915;
      v915 = __ROR4__(v915, 8);
      *(v43 - 2) = v913;
      v913 = __ROR4__(v913, 8);
      *(v43 - 7) = v915;
      *(v43 - 3) = v913;
      v43 += 8;
      v38 = __ROR4__(v915, 8);
      LODWORD(v11) = __ROR4__(v913, 8);
      v65 = v932-- == 1;
      v919 = v936;
      v915 = v38;
      v913 = (unsigned int)v11;
      uAugend = v953;
      if ( v65 )
        break;
      LODWORD(v32) = v1368;
      v42 = (unsigned __int8 *)v948[0];
      v40 = v1089;
      v41 = (unsigned __int8 *)v1087;
    }
    v39 = v937;
    v35 = (char *)v934;
  }
  v68 = 0LL;
  if ( v39 )
  {
    if ( v39 < 0x20 )
    {
      v78 = v918;
    }
    else
    {
      v69 = 0LL;
      v70 = 0LL;
      v71 = (const __m128i *)(v35 + 16);
      do
      {
        v72 = _mm_loadu_si128(v71 - 1);
        v68 += 32LL;
        v71 += 2;
        v69 = _mm_xor_si128(v72, v69);
        v73 = _mm_xor_si128(_mm_loadu_si128(v71 - 2), v70);
        v70 = v73;
      }
      while ( v68 < v39 - (v39 & 0x1F) );
      v74 = _mm_xor_si128(v69, v73);
      v75 = _mm_xor_si128(v74, _mm_srli_si128(v74, 8));
      v76 = _mm_xor_si128(v75, _mm_srli_si128(v75, 4));
      v77 = _mm_xor_si128(v76, _mm_srli_si128(v76, 2));
      v78 = _mm_cvtsi128_si32(_mm_xor_si128(v77, _mm_srli_si128(v77, 1)));
      v918 = v78;
    }
    if ( v68 < v39 )
    {
      do
        LOBYTE(v78) = v35[v68++] ^ v78;
      while ( v68 < v39 );
      v918 = v78;
    }
  }
  if ( (unsigned __int8)v918 != *(_QWORD *)(v39 + v1085) )
  {
    ExFreePoolWithTag(v35, 0x20534C53u);
    v27 = v1098;
    v6 = (unsigned int *)v907;
LABEL_839:
    v79 = -1073741823;
    v901 = -1073741823;
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0x20534C53u);
      v79 = -1073741823;
      v1098 = 0LL;
    }
    v7 = (UINT *)v909;
    LODWORD(v39) = v1012;
    goto LABEL_74;
  }
  v79 = 0;
  v7 = (UINT *)v35;
  v6 = (unsigned int *)v907;
  v1245 = v39;
  v909 = v35;
  v1098 = 0LL;
  v1012 = v39;
LABEL_74:
  if ( v79 < 0 )
  {
LABEL_845:
    v193 = v901;
LABEL_848:
    v9 = (unsigned int *)v908;
    v8 = (unsigned __int64)v908;
    goto LABEL_418;
  }
  if ( (unsigned int)v39 < 4 )
    goto LABEL_842;
  v931 = *v7;
  if ( v7 + 1 < v7 )
  {
LABEL_2273:
    v193 = -1073741675;
    goto LABEL_848;
  }
  if ( (unsigned int)(v39 - 4) < 4 )
  {
LABEL_842:
    v901 = -1073741762;
    goto LABEL_845;
  }
  v80 = v7[1];
  v81 = (char *)(v7 + 2);
  if ( v7 + 2 < v7 + 1 )
    goto LABEL_2273;
  if ( (int)v39 - 8 < (unsigned int)v80 )
    goto LABEL_842;
  if ( (unsigned int)v80 >= 0xFFFFFFF8 )
  {
    v901 = -1073741675;
    goto LABEL_845;
  }
  if ( (char *)v7 + (unsigned int)v39 >= &v81[v80] && (unsigned int)v39 - 8LL - v80 < 8 )
  {
    v901 = 0;
    v82 = 0LL;
    v83 = 0;
    if ( v81 )
    {
      v84 = (unsigned __int64)&v81[v80];
      v85 = v81;
      if ( &v81[v80] < v81 )
      {
LABEL_851:
        v901 = -1073741675;
LABEL_852:
        v87 = v901;
LABEL_104:
        v7 = (UINT *)v909;
        goto LABEL_105;
      }
      v901 = 0;
      if ( (unsigned __int64)v81 < v84 )
      {
        v86 = v1228;
        while ( v85 + 4 >= v85 )
        {
          if ( (unsigned __int64)(v85 + 4) > v84 )
            goto LABEL_853;
          if ( *(_DWORD *)v85 >= 0xFFFFFFFC )
          {
            v901 = -1073741675;
            v87 = -1073741675;
          }
          else
          {
            v86 = *(_DWORD *)v85 + 4;
            v87 = 0;
            v901 = 0;
            v1228 = v86;
          }
          if ( v87 < 0 )
            goto LABEL_104;
          v88 = &v85[v86];
          if ( v88 < v85 )
            goto LABEL_851;
          v901 = 0;
          v85 += v86;
          if ( (unsigned __int64)v88 > v84 )
            goto LABEL_853;
          ++v83;
          if ( (unsigned __int64)v88 >= v84 )
            goto LABEL_95;
        }
        goto LABEL_851;
      }
LABEL_95:
      if ( v85 != (char *)v84 )
      {
LABEL_853:
        v901 = -1073741811;
        goto LABEL_852;
      }
    }
    if ( (_DWORD)v80 )
    {
      v82 = ExAllocatePoolWithTag(PagedPool, v80, 0x20534C53u);
      if ( !v82 )
      {
        v901 = -1073741801;
        goto LABEL_102;
      }
      v901 = 0;
    }
    if ( v81 )
      memmove(v82, v81, v80);
    v912[1] = v82;
    v912[0] = __PAIR64__(v80, v83);
LABEL_102:
    v87 = v901;
    if ( v901 >= 0 && v931 != LODWORD(v912[0]) )
    {
      v9 = (unsigned int *)v908;
      v6 = (unsigned int *)v907;
      v8 = (unsigned __int64)v908;
      v193 = -1073741762;
      goto LABEL_417;
    }
    goto LABEL_104;
  }
  v901 = -1073741762;
  v87 = -1073741762;
LABEL_105:
  if ( v87 < 0 )
  {
LABEL_844:
    v6 = (unsigned int *)v907;
    goto LABEL_845;
  }
  if ( !v912[1] )
  {
    v91 = -1073741811;
    v901 = -1073741811;
    goto LABEL_113;
  }
  if ( !LODWORD(v912[0]) )
  {
    v901 = -1073741811;
LABEL_860:
    v91 = v901;
    goto LABEL_113;
  }
  v89 = *(_DWORD *)v912[1];
  v90 = (int *)(v912[1] + 4LL);
  if ( (unsigned __int64)(v912[1] + 4LL) < v912[1] )
  {
    v901 = -1073741675;
    goto LABEL_860;
  }
  v901 = 0;
  v1296 = *(_DWORD *)v912[1];
  if ( !v89 )
    v90 = 0LL;
  v1321[1] = (ULONGLONG)v90;
  if ( v89 != 4 )
  {
    v901 = -1073741789;
    goto LABEL_844;
  }
  v1132 = *v90;
  v91 = 0;
LABEL_113:
  if ( v91 < 0 )
    goto LABEL_844;
  if ( !v912[1] )
  {
    v6 = (unsigned int *)v907;
    v9 = 0LL;
    v193 = -1073741811;
    v8 = 0LL;
    v5 = 0LL;
    v912[0] = 0LL;
    goto LABEL_389;
  }
  if ( LODWORD(v912[0]) <= 1 )
    goto LABEL_846;
  v92 = (unsigned int *)v912[1];
  v93 = 0;
  do
  {
    v94 = *v92;
    v95 = v92 + 1;
    if ( v92 + 1 < v92 )
      goto LABEL_2272;
    v92 = (unsigned int *)((char *)v95 + v94);
    if ( (unsigned int *)((char *)v95 + v94) < v95 )
      goto LABEL_2272;
    ++v93;
  }
  while ( !v93 );
  v96 = *v92;
  v97 = v92 + 1;
  if ( v92 + 1 < v92 )
  {
LABEL_2272:
    v193 = -1073741675;
    goto LABEL_847;
  }
  v1175 = *v92;
  if ( !(_DWORD)v96 )
    v97 = 0LL;
  v1272 = v97;
  if ( LODWORD(v912[0]) <= 2 )
  {
LABEL_846:
    v193 = -1073741811;
LABEL_847:
    v6 = (unsigned int *)v907;
    goto LABEL_848;
  }
  v98 = (unsigned int *)v912[1];
  for ( i = 0; i < 2; ++i )
  {
    v100 = *v98;
    v101 = v98 + 1;
    if ( v98 + 1 < v98 )
      goto LABEL_2272;
    v98 = (unsigned int *)((char *)v101 + v100);
    if ( (unsigned int *)((char *)v101 + v100) < v101 )
      goto LABEL_2272;
  }
  v102 = *v98;
  v103 = v98 + 1;
  if ( v98 + 1 < v98 )
  {
    v9 = (unsigned int *)v908;
    v193 = -1073741675;
    v6 = (unsigned int *)v907;
    v8 = (unsigned __int64)v908;
    goto LABEL_417;
  }
  v1229 = *v98;
  if ( !(_DWORD)v102 )
    v103 = 0LL;
  v1316 = v103;
  v104 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  v107 = v104;
  if ( !v104 )
  {
    v9 = (unsigned int *)v908;
    v110 = -1073741801;
    v902 = -1073741801;
    LODWORD(v97) = 0;
    goto LABEL_142;
  }
  memset(v104, 0, 0x30uLL);
  *v107 = 0;
  *((_QWORD *)v107 + 1) = 0LL;
  v902 = 0;
  if ( v97 )
  {
    v107[4] = v96;
    if ( !(_DWORD)v96 )
    {
      v902 = -1073741762;
      LODWORD(v97) = 0;
LABEL_866:
      v456 = (void *)*((_QWORD *)v107 + 1);
      if ( v456 )
      {
        ExFreePoolWithTag(v456, 0x20534C53u);
        *((_QWORD *)v107 + 1) = 0LL;
      }
      v457 = (void *)*((_QWORD *)v107 + 3);
      if ( v457 )
      {
        ExFreePoolWithTag(v457, 0x20534C53u);
        *((_QWORD *)v107 + 3) = 0LL;
      }
      v458 = (void *)*((_QWORD *)v107 + 5);
      if ( v458 )
      {
        ExFreePoolWithTag(v458, 0x20534C53u);
        *((_QWORD *)v107 + 5) = 0LL;
      }
      ExFreePoolWithTag(v107, 0x20534C53u);
      v9 = (unsigned int *)v908;
      goto LABEL_141;
    }
    v108 = ExAllocatePoolWithTag(PagedPool, v96, 0x20534C53u);
    if ( !v108 )
    {
      LODWORD(v97) = 0;
LABEL_865:
      v902 = -1073741801;
      goto LABEL_866;
    }
    *((_QWORD *)v107 + 3) = v108;
    v902 = 0;
    memmove(v108, v97, v96);
    LODWORD(v97) = 0;
  }
  else
  {
    v107[4] = 0;
    *((_QWORD *)v107 + 3) = 0LL;
  }
  if ( !v103 )
  {
    v107[8] = 0;
    *((_QWORD *)v107 + 5) = 0LL;
    goto LABEL_140;
  }
  v107[8] = v102;
  if ( !(_DWORD)v102 )
  {
    v902 = -1073741762;
    goto LABEL_866;
  }
  v109 = ExAllocatePoolWithTag(PagedPool, v102, 0x20534C53u);
  if ( !v109 )
    goto LABEL_865;
  *((_QWORD *)v107 + 5) = v109;
  v902 = 0;
  memmove(v109, v103, v102);
LABEL_140:
  v9 = v107;
  v908 = v107;
LABEL_141:
  v110 = v902;
LABEL_142:
  if ( v110 < 0 )
  {
LABEL_776:
    v193 = v902;
LABEL_777:
    v6 = (unsigned int *)v907;
LABEL_416:
    v8 = (unsigned __int64)v910;
LABEL_417:
    v7 = (UINT *)v909;
LABEL_418:
    v5 = (PVOID)v8;
    goto LABEL_387;
  }
  if ( !v1132 )
  {
    SourceString = 0LL;
    v999 = 0;
    v111 = 0;
    v939 = 0;
    P = 0LL;
    Timeout.QuadPart = 0LL;
    if ( !v9 )
    {
      v6 = (unsigned int *)v907;
      v193 = -1073741811;
      v7 = (UINT *)v909;
      v8 = 0LL;
      v5 = 0LL;
      goto LABEL_387;
    }
    if ( v912[1] )
    {
      if ( LODWORD(v912[0]) <= 3 )
      {
        v113 = -1073741811;
      }
      else
      {
        v112 = v912[1];
        pullResult = v912[1];
        do
        {
          v113 = RtlULongLongAdd(v112, 4uLL, &pullResult);
          if ( v113 < 0 )
            goto LABEL_2118;
          v113 = RtlULongLongAdd(pullResult, v114, &pullResult);
          if ( v113 < 0 )
            goto LABEL_2118;
          v112 = pullResult;
        }
        while ( (unsigned int)(v115 + 1) < 3 );
        v113 = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
        if ( v113 < 0 )
        {
LABEL_2118:
          v116 = v1241;
          v117 = v1298;
          goto LABEL_155;
        }
        v1241 = v116;
        if ( v116 )
          v117 = (_QWORD *)pullResult;
        else
          v117 = 0LL;
        v1298 = v117;
LABEL_155:
        if ( v113 < 0 )
          goto LABEL_323;
        if ( v116 != 8 )
        {
          v113 = -1073741789;
          goto LABEL_323;
        }
        v1308 = *v117;
      }
    }
    else
    {
      v113 = -1073741811;
    }
    if ( v113 >= 0 )
    {
      if ( v912[1] )
      {
        if ( LODWORD(v912[0]) <= 4 )
        {
          v113 = -1073741811;
        }
        else
        {
          v118 = v912[1];
          v1002 = v912[1];
          do
          {
            v113 = RtlULongLongAdd(v118, 4uLL, &v1002);
            if ( v113 < 0 )
              goto LABEL_2123;
            v113 = RtlULongLongAdd(v1002, v119, &v1002);
            if ( v113 < 0 )
              goto LABEL_2123;
            v118 = v1002;
          }
          while ( (unsigned int)(v120 + 1) < 4 );
          v113 = RtlULongLongAdd(v1002, 4uLL, &v1002);
          if ( v113 < 0 )
          {
LABEL_2123:
            v121 = v1063;
            v122 = v1263;
            goto LABEL_169;
          }
          v1063 = v121;
          if ( v121 )
            v122 = (const wchar_t *)v1002;
          else
            v122 = 0LL;
          v1263 = (wchar_t *)v122;
LABEL_169:
          if ( v113 < 0 )
            goto LABEL_2136;
          if ( !v121 )
          {
            v113 = -1073741762;
            goto LABEL_180;
          }
          if ( (v121 & 1) != 0 )
          {
            v113 = -1073741762;
            goto LABEL_180;
          }
          if ( v122[((unsigned __int64)v121 >> 1) - 1] )
          {
            v113 = -1073741762;
            goto LABEL_180;
          }
          if ( StringCbLengthW(v122, v121, pcbLength) < 0 )
          {
            v113 = -1073741762;
            goto LABEL_180;
          }
          if ( pcbLength[0] + 2 != v1063 )
          {
            v113 = -1073741762;
            goto LABEL_180;
          }
          Src = v1263;
          v1025 = pcbLength[0] >> 1;
        }
      }
      else
      {
        v113 = -1073741811;
      }
      if ( v113 < 0 )
        goto LABEL_2136;
      if ( 2 * v1025 == -2 )
      {
        v113 = -1073741762;
      }
      else
      {
        v123 = 2 * v1025 + 2;
        v124 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v123, 0x20534C53u);
        v125 = v124;
        if ( v124 )
        {
          v113 = 0;
          memmove(v124, Src, v123);
          v1053 = v1025;
          SourceString = v125;
        }
        else
        {
          v113 = -1073741801;
        }
      }
LABEL_180:
      if ( v113 >= 0 )
      {
        if ( v912[1] )
        {
          if ( LODWORD(v912[0]) <= 5 )
          {
            v113 = -1073741811;
          }
          else
          {
            v126 = v912[1];
            v1004 = v912[1];
            do
            {
              v113 = RtlULongLongAdd(v126, 4uLL, &v1004);
              if ( v113 < 0 )
                goto LABEL_2134;
              v113 = RtlULongLongAdd(v1004, v127, &v1004);
              if ( v113 < 0 )
                goto LABEL_2134;
              v126 = v1004;
            }
            while ( (unsigned int)(v128 + 1) < 5 );
            v113 = RtlULongLongAdd(v1004, 4uLL, &v1004);
            if ( v113 < 0 )
            {
LABEL_2134:
              v129 = v1147;
              v130 = v1304;
              goto LABEL_191;
            }
            v1147 = v129;
            if ( v129 )
              v130 = (_DWORD *)v1004;
            else
              v130 = 0LL;
            v1304 = v130;
LABEL_191:
            if ( v113 < 0 )
              goto LABEL_2136;
            if ( v129 != 4 )
            {
              v113 = -1073741789;
              goto LABEL_2136;
            }
            v1153 = *v130;
          }
        }
        else
        {
          v113 = -1073741811;
        }
        if ( v113 >= 0 )
        {
          if ( v912[1] )
          {
            if ( LODWORD(v912[0]) <= 6 )
            {
              v113 = -1073741811;
            }
            else
            {
              v131 = v912[1];
              v933 = v912[1];
              do
              {
                v113 = RtlULongLongAdd(v131, 4uLL, &v933);
                if ( v113 < 0 )
                  goto LABEL_2140;
                v113 = RtlULongLongAdd(v933, v132, &v933);
                if ( v113 < 0 )
                  goto LABEL_2140;
                v131 = v933;
              }
              while ( (unsigned int)(v133 + 1) < 6 );
              v113 = RtlULongLongAdd(v933, 4uLL, &v933);
              if ( v113 < 0 )
              {
LABEL_2140:
                v134 = v1195;
                v135 = v1306;
                goto LABEL_205;
              }
              v1195 = v134;
              if ( v134 )
                v135 = (_DWORD *)v933;
              else
                v135 = 0LL;
              v1306 = v135;
LABEL_205:
              if ( v113 < 0 )
                goto LABEL_2136;
              if ( v134 != 4 )
              {
                v113 = -1073741789;
                v138 = 0LL;
                goto LABEL_318;
              }
              LODWORD(NumberOfBytes) = *v135;
            }
          }
          else
          {
            v113 = -1073741811;
          }
          if ( v113 >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, SourceString);
            v136 = NumberOfBytes;
            if ( (_DWORD)NumberOfBytes )
            {
              v137 = 1;
              if ( (unsigned int)NumberOfBytes <= 0x100000 )
                goto LABEL_211;
            }
            else
            {
              v137 = 0;
            }
            v271 = sub_140489CE0((unsigned int)&DestinationString, (unsigned int)&v999, 0, 0, (__int64)&v939);
            v140 = v271;
            if ( v271 == -1073741789 )
            {
              v272 = v939;
              if ( (unsigned int)NumberOfBytes < v939 )
              {
                if ( !(_DWORD)NumberOfBytes )
                  v140 = 0;
                goto LABEL_216;
              }
            }
            else
            {
              if ( v271 < 0 )
              {
                v113 = v271;
                goto LABEL_555;
              }
              v272 = v939;
              if ( v939 )
              {
                v113 = -2147418113;
                goto LABEL_555;
              }
              v137 = 0;
            }
            v136 = v272;
            v140 = 0;
            if ( !v137 )
              goto LABEL_216;
LABEL_211:
            P = ExAllocatePoolWithTag(PagedPool, v136, 0x20534C53u);
            v138 = P;
            if ( !P )
            {
              v113 = -1073741801;
              goto LABEL_318;
            }
            v139 = sub_140489CE0((unsigned int)&DestinationString, (unsigned int)&v999, (_DWORD)P, v136, (__int64)&v939);
            v140 = v139;
            if ( v139 != -1073741789 )
            {
              v113 = v139;
              if ( v139 < 0 )
                goto LABEL_555;
            }
            if ( v136 >= v939 )
              v136 = v939;
LABEL_216:
            v141 = 8;
            v1003 = 8;
            if ( v136 >= 0xFFFFFFFC )
            {
              v113 = -1073741675;
            }
            else
            {
              v141 = v136 + 4;
              v1003 = v136 + 4;
              v113 = 0;
            }
            if ( v113 < 0 )
            {
              v143 = v1053;
            }
            else
            {
              v142 = v141 + 28;
              if ( v142 < 0x1C )
                goto LABEL_2193;
              v1003 = 8;
              if ( v142 + 8 < v142 )
                goto LABEL_2193;
              v1003 = 8;
              v143 = v142 + 16;
              if ( v142 + 16 < v142 + 8 )
                goto LABEL_2226;
              v113 = 0;
            }
            if ( v113 < 0 )
              goto LABEL_555;
            if ( v143 < 0xFFFFFFF8 )
            {
              v1163 = v143 + 8;
              v144 = (v143 + 15) & 0xFFFFFFF8;
              if ( v144 < v143 + 8 )
              {
                v145 = v1053;
                v113 = -1073741675;
              }
              else
              {
                v145 = v144 + 8;
                if ( v144 + 8 < v144 )
                {
                  v1149 = -1;
                  goto LABEL_2154;
                }
                v1149 = v144 + 8;
                v113 = 0;
              }
              if ( v113 < 0 )
                goto LABEL_555;
              v146 = v145 + 4;
              v147 = *((_DWORD *)v908 + 8);
              v148 = *((_DWORD *)v908 + 4);
              if ( v146 >= 4 )
              {
                v149 = v146 + 4;
                if ( v146 + 4 >= v146 )
                {
                  v150 = v149 + v148;
                  if ( v149 + v148 >= v149 )
                  {
                    v151 = v150 + 4;
                    if ( v150 + 4 >= v150 && v151 + v147 >= v151 )
                    {
                      v113 = 0;
                      v1271[1] = v151 + v147;
                      v944 = v151 + v147;
                      goto LABEL_235;
                    }
                  }
                }
              }
LABEL_2154:
              v113 = -1073741675;
LABEL_235:
              if ( v113 >= 0 )
              {
                if ( v935 >= v944 && v140 >= 0 )
                {
                  v936 = 1;
                  RtlInitUnicodeString(&v1350, L"Security-SPP-GenuineLocalStatus");
                  v152 = sub_140489CE0(
                           (unsigned int)&v1350,
                           (unsigned int)&v1222,
                           (unsigned int)&v1151,
                           4,
                           (__int64)v1290);
                  v113 = v152;
                  if ( v152 == -1073741772 )
                  {
                    v946 = 0;
                  }
                  else
                  {
                    if ( v152 < 0 || v1222 == 4 && v1151 )
                      v153 = v936;
                    else
                      v153 = 0;
                    v946 = v153;
                    if ( v113 < 0 )
                      goto LABEL_555;
                  }
                  v154 = 0;
                  v155 = 0;
                  if ( DestinationString.Length == stru_1406FB238.Length )
                  {
                    if ( !memcmp(DestinationString.Buffer, stru_1406FB238.Buffer, stru_1406FB238.Length) )
                    {
                      v155 = dword_1406FB114;
                      v154 = 1;
                    }
                    else
                    {
                      v155 = 0;
                    }
                  }
                  v1300 = v154;
                  v1233 = v155;
                  v935 = v155 || v154;
                  v156 = KeWaitForSingleObject(&stru_1402D54C0, UserRequest, 1, 0, &Timeout);
                  if ( v156 >= 0 && v156 != 192 && v156 != 258 )
                  {
                    v157 = v946;
                    if ( g_ulOldGenuineState != v946 )
                    {
                      if ( v946 )
                      {
                        KeResetEvent(&stru_1402D5500);
                      }
                      else
                      {
                        v870 = MEMORY[0xFFFFF78000000320];
                        qword_1406FB208 = v870 * KeQueryTimeIncrement() / 10000;
                      }
                      v157 = v946;
                    }
                    v158 = MEMORY[0xFFFFF78000000320];
                    g_ulOldGenuineState = v157;
                    v159 = (unsigned __int64)(v158 * KeQueryTimeIncrement() / 10000 - qword_1406FB208) >= 0xADF4FC;
                    if ( v946 || !v159 && !v935 || !dword_1406FB1D4 )
                      goto LABEL_253;
                    KeSetEvent(&stru_1402D5500, 1, 0);
                    v871 = dword_1406FB0B4;
                    if ( !dword_1406FB0B4 )
                    {
                      v1027 = 4;
                      v1197 = 0;
                      KeyHandle = 0LL;
                      v872 = ZwOpenKey(&KeyHandle, 1u, &stru_1406FB7C8);
                      if ( v872 < 0 )
                      {
                        v872 = sub_140489CE0(
                                 (unsigned int)aBd,
                                 (unsigned int)&v1027,
                                 (unsigned int)&v965,
                                 4,
                                 (__int64)&v1197);
                        v871 = v965;
                      }
                      else
                      {
                        v871 = 3;
                        v965 = 3;
                      }
                      if ( v872 < 0 || v1027 != 4 || (unsigned int)(v871 - 1) > 2 )
                      {
                        v871 = 1;
                        v965 = 1;
                      }
                      if ( KeyHandle )
                      {
                        ZwClose(KeyHandle);
                        KeyHandle = 0LL;
                      }
                    }
                    v1065 = 0;
                    v1373 = 0LL;
                    v1372 = 0;
                    v1019[0] = 0;
                    if ( (int)sub_140489CE0(
                                (unsigned int)aLn,
                                (unsigned int)&v1065,
                                (unsigned int)&v1372,
                                12,
                                (__int64)v1019) >= 0
                      && v1065 == 3
                      && v1019[0] == 12 )
                    {
                      v873 = (unsigned int *)&v1372;
                      v874 = 0;
                      while ( 1 )
                      {
                        v875 = *v873;
                        if ( (*v873 & 0xF) == v871 )
                          break;
                        ++v874;
                        ++v873;
                        if ( v874 >= 3 )
                          goto LABEL_2181;
                      }
                    }
                    else
                    {
LABEL_2181:
                      v875 = dword_1406FB064 & 0xFFFF0000 | 0x3211;
                    }
                    dword_1406FB064 = v875;
                    if ( v1153 || v1233 )
                      v111 = v875;
                    else
LABEL_253:
                      KeReleaseMutex(&stru_1402D54C0, 0);
                  }
                }
                *(_DWORD *)Size = v143;
                if ( v143 )
                {
                  v160 = ExAllocatePoolWithTag(PagedPool, v143, 0x20534C53u);
                  if ( !v160 )
                  {
                    v113 = -1073741801;
                    goto LABEL_2187;
                  }
                  *(_QWORD *)&Size[4] = v160;
                  v161 = 0;
                  v905 = 0;
                  v1084 = v140 | 0x10000000;
                  if ( &v1084 )
                  {
                    v113 = RtlULongLongAdd((ULONGLONG)v160, 4uLL, &v1352);
                    if ( v113 >= 0 )
                    {
                      if ( v163 + 2 > (_DWORD *)((char *)v163 + *(unsigned int *)Size) )
                      {
                        v113 = -1073741789;
                        v138 = P;
                        goto LABEL_318;
                      }
                      v164 = (_DWORD *)v1352;
                      *v163 = v162;
                      *v164 = v1084;
                      v161 = ++v905;
                    }
                  }
                  else
                  {
                    v113 = -1073741811;
                  }
                  if ( v113 < 0 )
                    goto LABEL_2187;
                  v1267 = v1308;
                  if ( !&v1267 )
                  {
                    v113 = -1073741811;
                    goto LABEL_273;
                  }
                  if ( *(_QWORD *)&Size[4] )
                  {
                    v165 = *(_DWORD **)&Size[4];
                    v1087 = *(_QWORD *)&Size[4];
                    if ( v161 )
                    {
                      v166 = v1031;
                      do
                      {
                        if ( *v165 >= 0xFFFFFFFC )
                        {
                          v113 = -1073741675;
                        }
                        else
                        {
                          v166 = *v165 + 4;
                          v1031 = v166;
                          v113 = 0;
                        }
                        if ( v113 < 0 )
                          goto LABEL_2187;
                        v113 = RtlULongLongAdd((ULONGLONG)v165, v166, &v1087);
                        if ( v113 < 0 )
                          goto LABEL_273;
                        v165 = (_DWORD *)v1087;
                      }
                      while ( v167 + 1 < v161 );
                    }
                    v113 = RtlULongLongAdd((ULONGLONG)v165, 4uLL, v1354);
                    if ( v113 >= 0 )
                    {
                      if ( (unsigned __int64)(v168 + 3) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                      {
                        v113 = -1073741789;
                        v138 = P;
                        goto LABEL_318;
                      }
                      v169 = (_QWORD *)v1354[0];
                      *v168 = 8;
                      *v169 = v1267;
                      v161 = ++v905;
                    }
LABEL_273:
                    if ( v113 < 0 )
                      goto LABEL_2187;
                    goto LABEL_274;
                  }
                  v1031 = 12;
                  if ( (unsigned int)(*(_DWORD *)Size + 12) >= *(_DWORD *)Size )
                  {
                    ++v161;
                    *(_DWORD *)Size += 12;
                    v905 = v161;
LABEL_274:
                    v1067 = v999;
                    if ( &v1067 )
                    {
                      if ( *(_QWORD *)&Size[4] )
                      {
                        v170 = *(UINT **)&Size[4];
                        v1089 = *(_QWORD *)&Size[4];
                        if ( v161 )
                        {
                          while ( 1 )
                          {
                            v113 = RtlUIntAdd(4u, *v170, &puResult);
                            if ( v113 < 0 )
                              break;
                            v959 = puResult;
                            v113 = RtlULongLongAdd(v171, puResult, &v1089);
                            if ( v113 < 0 )
                              break;
                            v170 = (UINT *)v1089;
                            if ( v172 + 1 >= v161 )
                              goto LABEL_280;
                          }
                        }
                        else
                        {
LABEL_280:
                          v113 = RtlULongLongAdd((ULONGLONG)v170, 4uLL, v1356);
                          if ( v113 >= 0 )
                          {
                            if ( (unsigned __int64)(v174 + 2) > *(_QWORD *)&Size[4]
                                                              + (unsigned __int64)*(unsigned int *)Size )
                            {
                              v113 = -1073741789;
                              v138 = P;
                              goto LABEL_318;
                            }
                            v175 = (_DWORD *)v1356[0];
                            *v174 = v173;
                            *v175 = v1067;
                            v161 = ++v905;
                          }
                        }
                      }
                      else
                      {
                        v876 = RtlUIntAdd(4u, 4u, &v1155);
                        v877 = v959;
                        v113 = v876;
                        if ( v876 >= 0 )
                          v877 = v1155;
                        v959 = v877;
                        if ( v876 >= 0 )
                        {
                          v878 = RtlUIntAdd(*(UINT *)Size, v877, (UINT *)Size);
                          v161 = v905;
                          v113 = v878;
                          if ( v878 >= 0 )
                          {
                            v161 = ++v905;
LABEL_284:
                            v138 = P;
                            if ( P )
                            {
                              if ( v136 )
                                goto LABEL_286;
                            }
                            else if ( !v136 )
                            {
LABEL_286:
                              if ( *(_QWORD *)&Size[4] )
                              {
                                v176 = *(UINT **)&Size[4];
                                v948[0] = *(_QWORD *)&Size[4];
                                if ( v161 )
                                {
                                  while ( 1 )
                                  {
                                    v113 = RtlUIntAdd(4u, *v176, &v1224);
                                    if ( v113 < 0 )
                                      break;
                                    v989 = v1224;
                                    v113 = RtlULongLongAdd(v177, v1224, v948);
                                    if ( v113 < 0 )
                                      break;
                                    v176 = (UINT *)v948[0];
                                    if ( v178 + 1 >= v161 )
                                      goto LABEL_291;
                                  }
                                }
                                else
                                {
LABEL_291:
                                  v113 = RtlULongLongAdd((ULONGLONG)v176, 4uLL, v1358);
                                  if ( v113 >= 0 )
                                  {
                                    if ( (unsigned __int64)v179 + v136 + 4 > *(_QWORD *)&Size[4]
                                                                           + (unsigned __int64)*(unsigned int *)Size )
                                    {
                                      v113 = -1073741789;
                                      goto LABEL_318;
                                    }
                                    *v179 = v136;
                                    if ( v138 )
                                      memmove((void *)v1358[0], v138, v136);
                                    v161 = ++v905;
                                  }
                                }
                              }
                              else
                              {
                                v879 = RtlUIntAdd(4u, v136, &v1157);
                                v880 = v989;
                                v113 = v879;
                                if ( v879 >= 0 )
                                  v880 = v1157;
                                v989 = v880;
                                if ( v879 >= 0 )
                                {
                                  v881 = RtlUIntAdd(*(UINT *)Size, v880, (UINT *)Size);
                                  v161 = v905;
                                  v113 = v881;
                                  if ( v881 >= 0 )
                                  {
                                    v161 = ++v905;
                                    goto LABEL_297;
                                  }
                                }
                              }
LABEL_296:
                              if ( v113 < 0 )
                                goto LABEL_318;
LABEL_297:
                              v1033 = v939;
                              if ( &v1033 )
                              {
                                if ( *(_QWORD *)&Size[4] )
                                {
                                  v180 = *(UINT **)&Size[4];
                                  v937 = *(_QWORD *)&Size[4];
                                  if ( v161 )
                                  {
                                    while ( 1 )
                                    {
                                      v113 = RtlUIntAdd(4u, *v180, &v1203);
                                      if ( v113 < 0 )
                                        break;
                                      v961 = v1203;
                                      v113 = RtlULongLongAdd(v181, v1203, &v937);
                                      if ( v113 < 0 )
                                        break;
                                      v180 = (UINT *)v937;
                                      if ( v182 + 1 >= v161 )
                                        goto LABEL_303;
                                    }
                                  }
                                  else
                                  {
LABEL_303:
                                    v113 = RtlULongLongAdd((ULONGLONG)v180, 4uLL, &v1359);
                                    if ( v113 >= 0 )
                                    {
                                      if ( (unsigned __int64)(v184 + 2) > *(_QWORD *)&Size[4]
                                                                        + (unsigned __int64)*(unsigned int *)Size )
                                      {
                                        v113 = -1073741789;
                                        goto LABEL_318;
                                      }
                                      v185 = (_DWORD *)v1359;
                                      *v184 = v183;
                                      *v185 = v1033;
                                      v161 = ++v905;
                                    }
                                  }
                                }
                                else
                                {
                                  v882 = RtlUIntAdd(4u, 4u, &v1159);
                                  v883 = v961;
                                  v113 = v882;
                                  if ( v882 >= 0 )
                                    v883 = v1159;
                                  v961 = v883;
                                  if ( v882 >= 0 )
                                  {
                                    v884 = RtlUIntAdd(*(UINT *)Size, v883, (UINT *)Size);
                                    v161 = v905;
                                    v113 = v884;
                                    if ( v884 >= 0 )
                                    {
                                      v161 = ++v905;
LABEL_307:
                                      v1094 = v111;
                                      if ( &v1094 )
                                      {
                                        if ( *(_QWORD *)&Size[4] )
                                        {
                                          v186 = *(UINT **)&Size[4];
                                          v932 = *(_QWORD *)&Size[4];
                                          if ( v161 )
                                          {
                                            while ( 1 )
                                            {
                                              v113 = RtlUIntAdd(4u, *v186, &v979);
                                              if ( v113 < 0 )
                                                break;
                                              v1011 = v979;
                                              v113 = RtlULongLongAdd(v187, v979, &v932);
                                              if ( v113 < 0 )
                                                break;
                                              v186 = (UINT *)v932;
                                              if ( v189 + 1 >= v188 )
                                                goto LABEL_313;
                                            }
                                          }
                                          else
                                          {
LABEL_313:
                                            v113 = RtlULongLongAdd((ULONGLONG)v186, 4uLL, v1351);
                                            if ( v113 >= 0 )
                                            {
                                              if ( (unsigned __int64)(v191 + 2) > *(_QWORD *)&Size[4]
                                                                                + (unsigned __int64)*(unsigned int *)Size )
                                              {
                                                v113 = -1073741789;
                                                goto LABEL_318;
                                              }
                                              v192 = (unsigned int *)v1351[0];
                                              *v191 = v190;
                                              *v192 = v1094;
                                              ++v905;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v885 = RtlUIntAdd(4u, 4u, &v1161);
                                          v886 = v1011;
                                          v113 = v885;
                                          if ( v885 >= 0 )
                                            v886 = v1161;
                                          v1011 = v886;
                                          if ( v885 >= 0 )
                                          {
                                            v113 = RtlUIntAdd(*(UINT *)Size, v886, (UINT *)Size);
                                            if ( v113 >= 0 )
                                            {
                                              ++v905;
                                              goto LABEL_317;
                                            }
                                          }
                                        }
                                      }
                                      else
                                      {
                                        v113 = -1073741811;
                                      }
                                      if ( v113 >= 0 )
LABEL_317:
                                        v113 = 0;
LABEL_318:
                                      if ( SourceString )
                                      {
                                        ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
                                        SourceString = 0LL;
                                      }
                                      if ( v138 )
                                        ExFreePoolWithTag(v138, 0x20534C53u);
                                      v9 = (unsigned int *)v908;
                                      goto LABEL_323;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                v113 = -1073741811;
                              }
                              if ( v113 < 0 )
                                goto LABEL_318;
                              goto LABEL_307;
                            }
                            v113 = -1073741811;
                            goto LABEL_296;
                          }
                        }
                      }
                    }
                    else
                    {
                      v113 = -1073741811;
                    }
                    if ( v113 >= 0 )
                      goto LABEL_284;
LABEL_2187:
                    v138 = P;
                    goto LABEL_318;
                  }
                  *(_DWORD *)Size = -1;
LABEL_2193:
                  v138 = P;
                  v113 = -1073741675;
                  goto LABEL_318;
                }
                v113 = -1073741762;
              }
LABEL_555:
              v138 = P;
              goto LABEL_318;
            }
            v1163 = -1;
LABEL_2226:
            v113 = -1073741675;
            goto LABEL_555;
          }
        }
      }
LABEL_2136:
      v138 = 0LL;
      goto LABEL_318;
    }
LABEL_323:
    v193 = v113;
    v194 = v113 < 0;
LABEL_324:
    if ( !v194 )
      goto LABEL_325;
    goto LABEL_777;
  }
  switch ( v1132 )
  {
    case 1:
      v331 = SeExports;
      v332 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v333 = RtlLengthSid(v331->SeLocalServiceSid) + v332;
      v334 = v333 + RtlLengthSid(v331->SeAliasAdminsSid) + 32;
      v335 = (ACL *)ExAllocatePoolWithTag(PagedPool, v334, 0x20534C53u);
      v336 = v335;
      if ( !v335 )
      {
        v343 = -1073741801;
        Acl = -1073741801;
LABEL_892:
        v6 = (unsigned int *)v907;
        goto LABEL_592;
      }
      Acl = RtlCreateAcl(v335, v334, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v336, 2u, 0x20u, SeExports->SeLocalServiceSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v336, 2u, 0x20u, SeExports->SeNetworkServiceSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v336, 2u, 0x20u, SeExports->SeAliasAdminsSid);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v336, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectContext);
                  v337 = SeAccessCheck(
                           SecurityDescriptor,
                           &SubjectContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &GrantedAccess,
                           &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                  if ( !v337 )
                    Acl = AccessStatus;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v336, 0x20534C53u);
      if ( Acl < 0 )
      {
        v343 = Acl;
        goto LABEL_892;
      }
      ReturnLength = 0;
      Acl = 0;
      v1177 = 0;
      SystemInformation = 8;
      v338 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
      v339 = v338 >= 0 && (v1177 & 0x20) != 0;
      v340 = v338 >= 0 && (v1177 & 0x100) != 0;
      v6 = (unsigned int *)v907;
      v341 = *((_DWORD *)v907 + 4);
      if ( v341 != 160 || memcmp(qword_1406A4A70, *((const void **)v907 + 3), 0xA0uLL) )
      {
LABEL_578:
        if ( (v339 || v340) && v341 == 160 )
        {
          v9 = (unsigned int *)v908;
          if ( !memcmp(qword_1406A4B10, *((const void **)v6 + 3), 0xA0uLL)
            && *((_DWORD *)v908 + 4) == 160
            && !memcmp(qword_1406A4610, *((const void **)v908 + 3), 0xA0uLL)
            && v6[8] == 8
            && **((_QWORD **)v6 + 5) == 0x93278D843BBDC445uLL
            && *((_DWORD *)v908 + 8) == 8
            && **((_QWORD **)v908 + 5) == 0x6223E824AB21D998LL )
          {
            v342 = 0;
            goto LABEL_588;
          }
        }
        else
        {
          v9 = (unsigned int *)v908;
        }
        v342 = -2147024891;
        Acl = -2147024891;
LABEL_588:
        if ( v342 < 0 )
        {
          v343 = Acl;
          goto LABEL_592;
        }
        goto LABEL_589;
      }
      if ( *((_DWORD *)v908 + 4) != 160 || memcmp(qword_1406A4D90, *((const void **)v908 + 3), 0xA0uLL) )
        goto LABEL_887;
      if ( *((_DWORD *)v907 + 8) != 8 )
      {
        v6 = (unsigned int *)v907;
        goto LABEL_578;
      }
      if ( **((_QWORD **)v907 + 5) != 0xA564595855B292C4uLL
        || *((_DWORD *)v908 + 8) != 8
        || **((_QWORD **)v908 + 5) != 0x1B732BD76B4D09FCLL )
      {
LABEL_887:
        v6 = (unsigned int *)v907;
        goto LABEL_578;
      }
      v9 = (unsigned int *)v908;
      v6 = (unsigned int *)v907;
LABEL_589:
      v343 = 0;
      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 7) == 0 )
        v343 = -2147024891;
      Acl = v343;
LABEL_592:
      if ( v343 < 0 )
        goto LABEL_2270;
      v1068 = 0;
      v344 = RtlUIntAdd(4u, 4u, &v1223);
      Acl = v344;
      if ( v344 < 0 )
      {
        v345 = v1005;
      }
      else
      {
        v345 = v1223;
        v1005 = v1223;
      }
      if ( v344 < 0 || (v344 = RtlUIntAdd(0, v345, &v1068), Acl = v344, v344 < 0) )
        v346 = GrantedAccess;
      else
        v346 = v1068;
      if ( v344 < 0 )
        goto LABEL_2270;
      v1092 = 8;
      v347 = RtlUIntAdd(8u, v346, &v1092);
      Acl = v347;
      if ( v347 < 0 )
      {
        v353 = v347;
        goto LABEL_900;
      }
      v348 = (v1092 + 7) & 0xFFFFFFF8;
      if ( v348 < v1092 )
      {
        v349 = -1073741675;
        Acl = -1073741675;
      }
      else
      {
        v1029 = (v1092 + 7) & 0xFFFFFFF8;
        v349 = RtlUIntAdd(v348, 8u, &v1029);
        Acl = v349;
        if ( v349 >= 0 )
        {
          v350 = v1029;
          goto LABEL_603;
        }
      }
      v350 = v1005;
LABEL_603:
      if ( v349 < 0 )
      {
        v353 = Acl;
LABEL_900:
        v352 = GrantedAccess;
        goto LABEL_611;
      }
      v929 = 4;
      Acl = RtlUIntAdd(4u, v350, &v929);
      if ( Acl < 0
        || (Acl = RtlUIntAdd(v929, v351, &v929), Acl < 0)
        || (Acl = RtlUIntAdd(v929, v9[4], &v929), Acl < 0)
        || (Acl = RtlUIntAdd(v929, 4u, &v929), Acl < 0)
        || (Acl = RtlUIntAdd(v929, v9[8], &v929), Acl < 0) )
      {
        v352 = v1120;
      }
      else
      {
        v352 = v929;
        v1120 = v929;
      }
      v353 = Acl;
      if ( Acl < 0 )
        goto LABEL_900;
LABEL_611:
      if ( v353 < 0 )
        goto LABEL_659;
      if ( v935 < v352 )
      {
        v1069 = 0;
        if ( &v1069 )
        {
          if ( *(_QWORD *)&Size[4] )
          {
            v462 = *(UINT **)&Size[4];
            v1179 = *(_QWORD *)&Size[4];
            if ( v905 )
            {
              while ( 1 )
              {
                v461 = RtlUIntAdd(4u, *v462, &v1127);
                Acl = v461;
                if ( v461 >= 0 )
                  v464 = v1127;
                v963 = v464;
                if ( v461 < 0 )
                  break;
                v461 = RtlULongLongAdd(v463, v464, &v1179);
                Acl = v461;
                if ( v461 < 0 )
                  break;
                v462 = (UINT *)v1179;
                if ( v465 + 1 >= v905 )
                  goto LABEL_914;
              }
            }
            else
            {
LABEL_914:
              v461 = RtlULongLongAdd((ULONGLONG)v462, 4uLL, v1326);
              Acl = v461;
              if ( v461 >= 0 )
              {
                if ( (unsigned __int64)(v467 + 2) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                {
                  Acl = -1073741789;
                  goto LABEL_930;
                }
                v468 = (_DWORD *)v1326[0];
                *v467 = v466;
                *v468 = v1069;
                ++v905;
              }
            }
          }
          else
          {
            v459 = RtlUIntAdd(4u, 4u, &v1236);
            v460 = v963;
            Acl = v459;
            if ( v459 >= 0 )
              v460 = v1236;
            v963 = v460;
            if ( v459 < 0 )
              goto LABEL_659;
            v461 = RtlUIntAdd(*(UINT *)Size, v460, (UINT *)Size);
            Acl = v461;
            if ( v461 >= 0 )
            {
              ++v905;
LABEL_920:
              if ( *(_DWORD *)Size )
              {
                v469 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)Size, 0x20534C53u);
                if ( v469 )
                {
                  *(_QWORD *)&Size[4] = v469;
                  v905 = 0;
                  v1037 = 0;
                  if ( &v1037 )
                  {
                    Acl = RtlULongLongAdd((ULONGLONG)v469, 4uLL, v1325);
                    if ( Acl >= 0 )
                    {
                      if ( v471 + 2 <= (_DWORD *)((char *)v471 + *(unsigned int *)Size) )
                      {
                        v472 = (_DWORD *)v1325[0];
                        *v471 = v470;
                        *v472 = v1037;
                        ++v905;
                      }
                      else
                      {
                        Acl = -1073741789;
                      }
                    }
                  }
                  else
                  {
                    Acl = -1073741811;
                  }
                }
                else
                {
                  Acl = -1073741801;
                }
              }
              else
              {
                Acl = -1073741762;
              }
LABEL_930:
              if ( Acl >= 0 )
                goto LABEL_326;
              goto LABEL_659;
            }
          }
        }
        else
        {
          Acl = -1073741811;
          v461 = -1073741811;
        }
        if ( v461 < 0 )
          goto LABEL_659;
        goto LABEL_920;
      }
      v354 = v912[0];
      if ( v912[1] )
      {
        if ( LODWORD(v912[0]) <= 3 )
        {
          Acl = -1073741811;
          v360 = -1073741811;
        }
        else
        {
          v355 = v912[1];
          v957 = v912[1];
          do
          {
            Acl = RtlULongLongAdd(v355, 4uLL, &v957);
            if ( Acl < 0 )
              goto LABEL_935;
            Acl = RtlULongLongAdd(v957, v356, &v957);
            if ( Acl < 0 )
              goto LABEL_935;
            v355 = v957;
          }
          while ( (unsigned int)(v357 + 1) < 3 );
          Acl = RtlULongLongAdd(v957, 4uLL, &v957);
          if ( Acl < 0 )
          {
LABEL_935:
            v358 = v1139;
            v359 = v1274;
            goto LABEL_623;
          }
          v1139 = v358;
          if ( v358 )
            v359 = (_QWORD *)v957;
          else
            v359 = 0LL;
          v1274 = v359;
LABEL_623:
          if ( Acl >= 0 )
          {
            if ( v358 != 8 )
            {
              Acl = -1073741789;
              goto LABEL_659;
            }
            v1318 = *v359;
          }
          v360 = Acl;
        }
      }
      else
      {
        v360 = -1073741811;
        Acl = -1073741811;
      }
      if ( v360 < 0 )
        goto LABEL_659;
      if ( !v1318 || !qword_1406FB248 )
      {
        v1076 = -1073425151;
        if ( &v1076 )
        {
          if ( *(_QWORD *)&Size[4] )
          {
            v490 = *(UINT **)&Size[4];
            v1184 = *(_QWORD *)&Size[4];
            if ( v905 )
            {
              while ( 1 )
              {
                v489 = RtlUIntAdd(4u, *v490, &v1208);
                Acl = v489;
                if ( v489 >= 0 )
                  v492 = v1208;
                v969 = v492;
                if ( v489 < 0 )
                  break;
                v489 = RtlULongLongAdd(v491, v492, &v1184);
                Acl = v489;
                if ( v489 < 0 )
                  break;
                v490 = (UINT *)v1184;
                if ( v493 + 1 >= v905 )
                  goto LABEL_988;
              }
            }
            else
            {
LABEL_988:
              v489 = RtlULongLongAdd((ULONGLONG)v490, 4uLL, v1345);
              Acl = v489;
              if ( v489 >= 0 )
              {
                if ( (unsigned __int64)(v495 + 2) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                {
                  Acl = -1073741789;
                  goto LABEL_659;
                }
                v496 = (int *)v1345[0];
                *v495 = v494;
                *v496 = v1076;
                ++v905;
              }
            }
          }
          else
          {
            v487 = RtlUIntAdd(4u, 4u, &v1167);
            v488 = v969;
            Acl = v487;
            if ( v487 >= 0 )
              v488 = v1167;
            v969 = v488;
            if ( v487 < 0 )
              goto LABEL_659;
            v489 = RtlUIntAdd(*(UINT *)Size, v488, (UINT *)Size);
            Acl = v489;
            if ( v489 >= 0 )
            {
              ++v905;
LABEL_994:
              if ( !*(_DWORD *)Size )
              {
                Acl = -1073741762;
                goto LABEL_659;
              }
              v497 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)Size, 0x20534C53u);
              if ( !v497 )
              {
                Acl = -1073741801;
                goto LABEL_659;
              }
              *(_QWORD *)&Size[4] = v497;
              v905 = 0;
              v1043 = -1073425151;
              if ( !&v1043 )
                goto LABEL_1003;
              Acl = RtlULongLongAdd((ULONGLONG)v497, 4uLL, v1331);
              if ( Acl >= 0 )
              {
                if ( v499 + 2 <= (_DWORD *)((char *)v499 + *(unsigned int *)Size) )
                {
                  v500 = (int *)v1331[0];
                  *v499 = v498;
                  *v500 = v1043;
                  ++v905;
                }
                else
                {
                  Acl = -1073741789;
                }
              }
              goto LABEL_659;
            }
          }
        }
        else
        {
          Acl = -1073741811;
          v489 = -1073741811;
        }
        if ( v489 < 0 )
          goto LABEL_659;
        goto LABEL_994;
      }
      if ( v1318 != qword_1406FB248 )
      {
        v1086 = -1073425151;
        if ( &v1086 )
        {
          if ( *(_QWORD *)&Size[4] )
          {
            v476 = *(UINT **)&Size[4];
            v1181 = *(_QWORD *)&Size[4];
            if ( v905 )
            {
              while ( 1 )
              {
                v475 = RtlUIntAdd(4u, *v476, &v1239);
                Acl = v475;
                if ( v475 >= 0 )
                  v478 = v1239;
                v991 = v478;
                if ( v475 < 0 )
                  break;
                v475 = RtlULongLongAdd(v477, v478, &v1181);
                Acl = v475;
                if ( v475 < 0 )
                  break;
                v476 = (UINT *)v1181;
                if ( v479 + 1 >= v905 )
                  goto LABEL_950;
              }
            }
            else
            {
LABEL_950:
              v475 = RtlULongLongAdd((ULONGLONG)v476, 4uLL, v1343);
              Acl = v475;
              if ( v475 >= 0 )
              {
                if ( (unsigned __int64)(v481 + 2) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                {
                  Acl = -1073741789;
                  goto LABEL_659;
                }
                v482 = (int *)v1343[0];
                *v481 = v480;
                *v482 = v1086;
                ++v905;
              }
            }
          }
          else
          {
            v473 = RtlUIntAdd(4u, 4u, &v1145);
            v474 = v991;
            Acl = v473;
            if ( v473 >= 0 )
              v474 = v1145;
            v991 = v474;
            if ( v473 < 0 )
              goto LABEL_659;
            v475 = RtlUIntAdd(*(UINT *)Size, v474, (UINT *)Size);
            Acl = v475;
            if ( v475 >= 0 )
            {
              ++v905;
LABEL_956:
              if ( !*(_DWORD *)Size )
              {
                Acl = -1073741762;
                goto LABEL_659;
              }
              v483 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)Size, 0x20534C53u);
              if ( !v483 )
              {
                Acl = -1073741801;
                goto LABEL_659;
              }
              *(_QWORD *)&Size[4] = v483;
              v905 = 0;
              v1039 = -1073425151;
              if ( !&v1039 )
                goto LABEL_1003;
              Acl = RtlULongLongAdd((ULONGLONG)v483, 4uLL, v1327);
              if ( Acl >= 0 )
              {
                if ( v485 + 2 <= (_DWORD *)((char *)v485 + *(unsigned int *)Size) )
                {
                  v486 = (int *)v1327[0];
                  *v485 = v484;
                  *v486 = v1039;
                  ++v905;
                }
                else
                {
                  Acl = -1073741789;
                }
              }
              goto LABEL_659;
            }
          }
        }
        else
        {
          Acl = -1073741811;
          v475 = -1073741811;
        }
        if ( v475 < 0 )
          goto LABEL_659;
        goto LABEL_956;
      }
      if ( !v912[1] || v354 <= 4 )
        goto LABEL_1003;
      v361 = v912[1];
      v958 = v912[1];
      do
      {
        v362 = RtlULongLongAdd(v361, 4uLL, &v958);
        Acl = v362;
        if ( v362 < 0 )
          goto LABEL_966;
        v362 = RtlULongLongAdd(v958, v363, &v958);
        Acl = v362;
        if ( v362 < 0 )
          goto LABEL_966;
        v361 = v958;
      }
      while ( (unsigned int)(v364 + 1) < 4 );
      v362 = RtlULongLongAdd(v958, 4uLL, &v958);
      Acl = v362;
      if ( v362 < 0 )
      {
LABEL_966:
        v365 = v1206;
        goto LABEL_641;
      }
      v1206 = v365;
      if ( v365 )
        v366 = v958;
      else
        v366 = 0LL;
      v1297 = v366;
LABEL_641:
      if ( v362 >= 0 )
      {
        updated = ExUpdateLicenseData_0(v365);
        if ( updated == 0x40000000 )
        {
          v368 = 1074058753;
        }
        else if ( updated == 263 )
        {
          v368 = 1074058754;
        }
        else if ( updated < 0 )
        {
          v368 = updated | 0x10000000;
        }
        else
        {
          v368 = 0;
        }
        *(_DWORD *)Size = 0;
        v905 = 0;
        if ( *(_QWORD *)&Size[4] )
        {
          ExFreePoolWithTag(*(PVOID *)&Size[4], 0x20534C53u);
          *(_QWORD *)&Size[4] = 0LL;
        }
        v1071 = v368;
        if ( !&v1071 )
        {
          Acl = -1073741811;
          goto LABEL_659;
        }
        v369 = RtlUIntAdd(4u, 4u, &v1165);
        Acl = v369;
        if ( v369 < 0 )
        {
          v370 = v993;
        }
        else
        {
          v370 = v1165;
          v993 = v1165;
        }
        if ( v369 >= 0 )
        {
          Acl = RtlUIntAdd(*(UINT *)Size, v370, (UINT *)Size);
          if ( Acl >= 0 )
          {
            ++v905;
            if ( !*(_DWORD *)Size )
            {
              Acl = -1073741762;
              goto LABEL_659;
            }
            v371 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)Size, 0x20534C53u);
            if ( !v371 )
            {
              Acl = -1073741801;
              goto LABEL_659;
            }
            *(_QWORD *)&Size[4] = v371;
            v905 = 0;
            v1041 = v368;
            if ( &v1041 )
            {
              Acl = RtlULongLongAdd((ULONGLONG)v371, 4uLL, v1329);
              if ( Acl >= 0 )
              {
                if ( v373 + 2 > (_DWORD *)((char *)v373 + *(unsigned int *)Size) )
                {
                  Acl = -1073741789;
                }
                else
                {
                  v374 = (int *)v1329[0];
                  *v373 = v372;
                  *v374 = v1041;
                  ++v905;
                }
              }
              goto LABEL_659;
            }
LABEL_1003:
            Acl = -1073741811;
          }
        }
      }
LABEL_659:
      if ( Acl < 0 )
      {
LABEL_2270:
        v193 = Acl;
        goto LABEL_416;
      }
LABEL_326:
      v1248 = __rdtsc();
      v943 = 8;
      v193 = RtlUIntAdd(8u, *(UINT *)Size, &v943);
      if ( v193 >= 0 )
      {
        v195 = (v943 + 7) & 0xFFFFFFF8;
        if ( v195 < v943 )
        {
          v193 = -1073741675;
        }
        else
        {
          v943 = (v943 + 7) & 0xFFFFFFF8;
          if ( v195 )
          {
            v196 = (char *)ExAllocatePoolWithTag(PagedPool, v195, 0x20534C53u);
            v197 = v196;
            if ( v196 )
            {
              v940 = (ULONGLONG)v196;
              *(_DWORD *)v196 = v905;
              v193 = RtlULongLongAdd((ULONGLONG)v196, 4uLL, &v940);
              if ( v193 >= 0 )
              {
                v199 = v940;
                *(_DWORD *)v940 = *(_DWORD *)Size;
                v193 = RtlULongLongAdd(v199, v198, &v940);
                if ( v193 >= 0 )
                {
                  *(_QWORD *)&v197[v943 - 8] = v1248;
                  memmove((void *)v940, *(const void **)&Size[4], *(unsigned int *)Size);
                  v200 = v943;
                  v8 = (unsigned __int64)v197;
                  v910 = v197;
                  goto LABEL_333;
                }
              }
              ExFreePoolWithTag(v197, 0x20534C53u);
            }
            else
            {
              v193 = -1073741801;
            }
          }
          else
          {
            v193 = -1073741762;
          }
        }
      }
      v200 = v921;
      v8 = v921;
LABEL_333:
      if ( v193 < 0 )
      {
LABEL_2233:
        v7 = (UINT *)v909;
        v5 = v911;
        goto LABEL_387;
      }
      v1121 = 0LL;
      v1310 = 0LL;
      if ( !v8 )
      {
        v193 = -1073741811;
        goto LABEL_2233;
      }
      if ( v200 )
      {
        v201 = (__int64 *)*((_QWORD *)v9 + 5);
        if ( v201 )
        {
          v202 = v9[8];
          if ( v202 )
          {
            v203 = *((_QWORD *)v9 + 3);
            pcbLength[0] = v203;
            if ( v203 )
            {
              v204 = v9[4];
              if ( v204 )
              {
                v934 = (PVOID)v200;
                if ( v202 != 8 || v204 != 160 )
                  goto LABEL_2263;
                v205 = *v201;
                LOBYTE(v202) = 0;
                v931 = v202;
                v206 = 0LL;
                if ( v200 >= 0x20uLL )
                {
                  v207 = 0LL;
                  v208 = 0LL;
                  v209 = (const __m128i *)(v8 + 16);
                  do
                  {
                    v210 = _mm_loadu_si128(v209 - 1);
                    v206 += 32LL;
                    v209 += 2;
                    v207 = _mm_xor_si128(v210, v207);
                    v211 = _mm_xor_si128(_mm_loadu_si128(v209 - 2), v208);
                    v208 = v211;
                  }
                  while ( v206 < v200 - (unsigned __int64)(v200 & 0x1F) );
                  v212 = _mm_xor_si128(v207, v211);
                  v213 = _mm_xor_si128(v212, _mm_srli_si128(v212, 8));
                  v214 = _mm_xor_si128(v213, _mm_srli_si128(v213, 4));
                  v215 = _mm_xor_si128(v214, _mm_srli_si128(v214, 2));
                  v202 = _mm_cvtsi128_si32(_mm_xor_si128(v215, _mm_srli_si128(v215, 1)));
                  v931 = v202;
                }
                if ( v206 < v200 )
                {
                  do
                  {
                    LOBYTE(v202) = *(_BYTE *)(v206 + v8) ^ v202;
                    ++v206;
                  }
                  while ( v206 < v200 );
                  v931 = v202;
                }
                v216 = v200 + 8LL;
                v940 = v216;
                v217 = (char *)ExAllocatePoolWithTag(PagedPool, v216, 0x20534C53u);
                v933 = (ULONGLONG)v217;
                v218 = v217;
                if ( v217 )
                {
                  v219 = (unsigned __int64)v934;
                  v220 = 0;
                  *(_QWORD *)v1369 = v205;
                  v221 = -1;
                  v916 = 0;
                  v914 = -1;
                  v222 = (unsigned __int8 *)v8;
                  v918 = 0;
                  v223 = v217;
                  v921 = 0;
                  v224 = 0;
                  v225 = (unsigned __int8)v934 & 7;
                  if ( ((unsigned __int8)v934 & 7) != 0 )
                  {
                    v918 = 0;
                    v921 = 0;
                    v887 = 0;
                    v888 = 0;
                    v889 = 56;
                    do
                    {
                      v890 = *v222;
                      if ( v888 >= 4 )
                        v220 |= v890 << v889;
                      else
                        v887 |= v890 << (v889 - 32);
                      ++v222;
                      ++v888;
                      v889 -= 8;
                    }
                    while ( v888 < v225 );
                    v921 = v887;
                    v918 = v220;
                    v891 = 16LL;
                    v892 = (unsigned __int8 *)(v203 + 158);
                    v893 = (unsigned __int8 *)(v203 + 126);
                    v932 = v203 + 158;
                    v937 = 16LL;
                    v894 = 30;
                    do
                    {
                      v895 = v892[1];
                      if ( v895 < 0x1Fu )
                      {
                        v896 = funcs_140466E74[v895](
                                 v894 + 1,
                                 *(v893 - 2),
                                 *(v893 - 1),
                                 *v893,
                                 v893[1],
                                 (__int64)v1369,
                                 v224);
                        v224 = v916;
                        v221 = v896 ^ v914;
                        v892 = (unsigned __int8 *)v932;
                        v891 = v937;
                        v914 = v221;
                      }
                      if ( *v892 < 0x1Fu )
                      {
                        v897 = funcs_140466E74[*v892](
                                 v894,
                                 *(v893 - 6),
                                 *(v893 - 5),
                                 *(v893 - 4),
                                 *(v893 - 3),
                                 (__int64)v1369,
                                 v221);
                        v221 = v914;
                        v224 = v897 ^ v916;
                        v892 = (unsigned __int8 *)v932;
                        v891 = v937;
                        v916 = v224;
                      }
                      v892 -= 2;
                      v894 -= 2;
                      v893 -= 8;
                      v932 = (ULONGLONG)v892;
                      v937 = --v891;
                    }
                    while ( v891 );
                    v224 ^= v921;
                    v898 = v918 ^ v221;
                    v899 = 0;
                    v203 = pcbLength[0];
                    v916 = v224;
                    v914 = v898;
                    if ( v225 > 0 )
                    {
                      do
                      {
                        if ( v899 >= 4 )
                        {
                          v898 = __ROL4__(v898, 8);
                          *v223 = v898;
                        }
                        else
                        {
                          v224 = __ROL4__(v224, 8);
                          *v223 = v224;
                        }
                        ++v223;
                        ++v899;
                      }
                      while ( v899 < v225 );
                      v224 = v916;
                      v898 = v914;
                    }
                    v900 = v225 - 4;
                    if ( v225 - 4 <= 0 )
                    {
                      v914 = 0;
                      v221 = 0;
                      if ( v900 < 0 )
                      {
                        v224 = v224 >> (-8 * v900) << (-8 * v900);
                        v916 = v224;
                      }
                    }
                    else
                    {
                      v221 = v898 >> (8 * (4 - v900)) << (8 * (4 - v900));
                      v914 = v221;
                    }
                    v219 = (unsigned __int64)v934;
                    v216 = v940;
                    v218 = (char *)v933;
                  }
                  v948[0] = v219 >> 3;
                  if ( v219 >> 3 )
                  {
                    v226 = v203 + 129;
                    v227 = v203 + 2;
                    v1240 = v203 + 129;
                    v1238 = v203 + 2;
                    v228 = v222 + 2;
                    v937 = (ULONGLONG)(v223 + 7);
                    do
                    {
                      v229 = (_BYTE *)v226;
                      v230 = 0;
                      v231 = (unsigned __int8 *)v227;
                      v232 = 16LL;
                      v233 = v228[1] | ((*v228 | ((*(v228 - 1) | (*(v228 - 2) << 8)) << 8)) << 8);
                      v234 = v233 ^ v224;
                      v235 = v228[5] | ((v228[4] | ((v228[3] | (v228[2] << 8)) << 8)) << 8);
                      v916 = v234;
                      v236 = v235 ^ v221;
                      v979 = v235;
                      v932 = v236;
                      pcbLength[0] = (size_t)(v228 + 8);
                      v914 = v236;
                      do
                      {
                        v237 = *(v229 - 1);
                        if ( v237 < 0x1Fu )
                        {
                          v268 = funcs_140466E74[v237](
                                   v230,
                                   *(v231 - 2),
                                   *(v231 - 1),
                                   *v231,
                                   v231[1],
                                   (__int64)v1369,
                                   v236);
                          v236 = v914;
                          v234 = v268 ^ v916;
                          v916 ^= v268;
                        }
                        if ( *v229 < 0x1Fu )
                        {
                          v269 = funcs_140466E74[(unsigned __int8)*v229](
                                   v230 + 1,
                                   v231[2],
                                   v231[3],
                                   v231[4],
                                   v231[5],
                                   (__int64)v1369,
                                   v234);
                          v234 = v916;
                          v236 = v269 ^ v914;
                          v914 ^= v269;
                        }
                        v230 += 2;
                        v231 += 8;
                        v229 += 2;
                        --v232;
                      }
                      while ( v232 );
                      v932 = v236;
                      v238 = (v1369[3] * (v1369[0] + __ROR4__(~(_DWORD)v236, 5))) ^ v234;
                      v239 = (v238 >> 10) ^ (v1369[1] * (v1369[3] ^ v238)) ^ v236;
                      v240 = __ROR4__(v239, 10) ^ (v1369[2] * __ROR4__(*(_DWORD *)v1369 ^ v239, 12)) ^ v238;
                      v241 = (v1369[3] * __ROR4__(v240 - *(_DWORD *)v1369, 14) - __ROL4__(v240, 8)) ^ v239;
                      v242 = (__ROL4__(v241, 2) + v1369[0] * __ROR4__(v241 + *(_DWORD *)&v1369[2], 15)) ^ v240;
                      v243 = (v1369[1] * (v1369[2] ^ v242)) ^ __ROR4__(v242, 6) ^ v241;
                      v244 = (*(_DWORD *)&v1369[2] - (*(_DWORD *)v1369 ^ v243)) ^ v242;
                      v245 = (v1369[3] * __ROL4__(v1369[1] ^ v244, 6) - __ROL4__(v244, 2)) ^ v243;
                      v246 = (v1369[0] * (v245 - v1369[2]) - (v245 >> 13)) ^ v244;
                      v247 = (v1369[1] * __ROR4__(v246 + *(_DWORD *)&v1369[2], 9) - __ROL4__(v246, 2)) ^ v245;
                      v248 = (_BYTE *)v937;
                      v227 = v1238;
                      v249 = v979;
                      v250 = (__ROL4__(v247, 10) + v1369[2] * __ROL4__(v247 - *(_DWORD *)v1369, 5)) ^ v246;
                      v228 = (unsigned __int8 *)pcbLength[0];
                      v916 = v921 ^ v250;
                      v921 = v233;
                      v914 = v918 ^ *(_DWORD *)v1369 ^ *(_DWORD *)&v1369[2] ^ v250 ^ v247;
                      *(_BYTE *)(v937 - 4) = v916;
                      v916 = __ROR4__(v916, 8);
                      *v248 = v914;
                      v914 = __ROR4__(v914, 8);
                      *(v248 - 5) = v916;
                      v916 = __ROR4__(v916, 8);
                      *(v248 - 1) = v914;
                      v914 = __ROR4__(v914, 8);
                      *(v248 - 6) = v916;
                      v916 = __ROR4__(v916, 8);
                      *(v248 - 2) = v914;
                      v914 = __ROR4__(v914, 8);
                      *(v248 - 7) = v916;
                      *(v248 - 3) = v914;
                      v224 = __ROR4__(v916, 8);
                      v221 = __ROR4__(v914, 8);
                      v65 = v948[0]-- == 1;
                      v918 = v249;
                      v937 = (ULONGLONG)(v248 + 8);
                      v226 = v1240;
                      v916 = v224;
                      v914 = v221;
                    }
                    while ( !v65 );
                    v219 = (unsigned __int64)v934;
                    v216 = v940;
                    v218 = (char *)v933;
                  }
                  v193 = 0;
                  *(_QWORD *)&v218[v219] = (unsigned __int8)v931;
                  v1121 = v218;
                  v1310 = v216;
                  if ( (_DWORD)v216 )
                  {
                    v251 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v216, 0x20534C53u);
                    v252 = v251;
                    if ( v251 )
                    {
                      memmove(v251, (const void *)v933, (unsigned int)v216);
                      v9 = (unsigned int *)v908;
                      *((_QWORD *)v908 + 1) = v252;
                      *v9 = v216;
                    }
                    else
                    {
                      v9 = (unsigned int *)v908;
                      v193 = -1073741801;
                    }
                  }
                  else
                  {
                    v9 = (unsigned int *)v908;
                    v193 = -1073741762;
                  }
                  v8 = (unsigned __int64)v910;
                }
                else
                {
LABEL_2263:
                  v193 = -1073741823;
                }
                if ( v1121 )
                {
                  ExFreePoolWithTag(v1121, 0x20534C53u);
                  v1121 = 0LL;
                }
                if ( v193 >= 0 )
                {
                  v253 = *v9;
                  uAugend = 4;
                  v193 = RtlUIntAdd(4u, v253, &uAugend);
                  if ( v193 < 0
                    || (v193 = RtlUIntAdd(uAugend, v254, &uAugend), v193 < 0)
                    || (v193 = RtlUIntAdd(uAugend, v9[4], &uAugend), v193 < 0)
                    || (v193 = RtlUIntAdd(uAugend, 4u, &uAugend), v193 < 0)
                    || (v193 = RtlUIntAdd(uAugend, v9[8], &uAugend), v193 < 0) )
                  {
                    v255 = v1035;
                  }
                  else
                  {
                    v255 = uAugend;
                    v1035 = uAugend;
                  }
                  if ( v193 >= 0 )
                  {
                    if ( v255 )
                    {
                      v256 = ExAllocatePoolWithTag(PagedPool, v255, 0x20534C53u);
                      v257 = v256;
                      if ( v256 )
                      {
                        v941 = (ULONGLONG)v256;
                        *v256 = *v9;
                        v193 = RtlULongLongAdd((ULONGLONG)v256, 4uLL, &v941);
                        if ( v193 >= 0 )
                        {
                          memmove((void *)v941, *((const void **)v9 + 1), *v9);
                          v193 = RtlULongLongAdd(v941, *v9, &v941);
                          if ( v193 >= 0 )
                          {
                            v258 = v941;
                            *(_DWORD *)v941 = v9[4];
                            v193 = RtlULongLongAdd(v258, 4uLL, &v941);
                            if ( v193 >= 0 )
                            {
                              memmove((void *)v941, *((const void **)v9 + 3), v9[4]);
                              v193 = RtlULongLongAdd(v941, v9[4], &v941);
                              if ( v193 >= 0 )
                              {
                                v259 = v941;
                                *(_DWORD *)v941 = v9[8];
                                v193 = RtlULongLongAdd(v259, 4uLL, &v941);
                                if ( v193 >= 0 )
                                {
                                  memmove((void *)v941, *((const void **)v9 + 5), v9[8]);
                                  v193 = RtlULongLongAdd(v941, v9[8], &v941);
                                  if ( v193 >= 0 )
                                  {
                                    v260 = v1035;
                                    v5 = v257;
LABEL_384:
                                    v7 = (UINT *)v909;
                                    if ( v193 >= 0 )
                                    {
                                      *v1312 = v5;
                                      v5 = 0LL;
                                      *v1314 = v260;
                                    }
                                    v6 = (unsigned int *)v907;
                                    goto LABEL_387;
                                  }
                                }
                              }
                            }
                          }
                        }
                        ExFreePoolWithTag(v257, 0x20534C53u);
                      }
                      else
                      {
                        v193 = -1073741801;
                      }
                    }
                    else
                    {
                      v193 = -1073741762;
                    }
                  }
                  v5 = v911;
                  v260 = (unsigned int)v911;
                  goto LABEL_384;
                }
                v6 = (unsigned int *)v907;
                v7 = (UINT *)v909;
                v5 = v911;
              }
              else
              {
                v7 = (UINT *)v909;
                v193 = -1073741811;
                v5 = v911;
              }
            }
            else
            {
              v7 = (UINT *)v909;
              v193 = -1073741811;
              v5 = v911;
            }
          }
          else
          {
            v7 = (UINT *)v909;
            v193 = -1073741811;
            v5 = v911;
          }
        }
        else
        {
          v7 = (UINT *)v909;
          v193 = -1073741811;
          v5 = v911;
        }
      }
      else
      {
        v7 = (UINT *)v909;
        v193 = -1073741811;
        v5 = v911;
      }
LABEL_387:
      v912[0] = 0LL;
      if ( v912[1] )
      {
        ExFreePoolWithTag((PVOID)v912[1], 0x20534C53u);
        v912[1] = 0LL;
      }
LABEL_389:
      *(_DWORD *)Size = 0;
      v905 = 0;
      if ( *(_QWORD *)&Size[4] )
      {
        ExFreePoolWithTag(*(PVOID *)&Size[4], 0x20534C53u);
        *(_QWORD *)&Size[4] = 0LL;
      }
      if ( v7 )
        ExFreePoolWithTag(v7, 0x20534C53u);
      if ( v6 )
      {
        v261 = (void *)*((_QWORD *)v6 + 1);
        if ( v261 )
        {
          ExFreePoolWithTag(v261, 0x20534C53u);
          *((_QWORD *)v6 + 1) = 0LL;
        }
        v262 = (void *)*((_QWORD *)v6 + 3);
        if ( v262 )
        {
          ExFreePoolWithTag(v262, 0x20534C53u);
          *((_QWORD *)v6 + 3) = 0LL;
        }
        v263 = (void *)*((_QWORD *)v6 + 5);
        if ( v263 )
        {
          ExFreePoolWithTag(v263, 0x20534C53u);
          *((_QWORD *)v6 + 5) = 0LL;
        }
        ExFreePoolWithTag(v6, 0x20534C53u);
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0x20534C53u);
      if ( v9 )
      {
        v264 = (void *)*((_QWORD *)v9 + 1);
        if ( v264 )
        {
          ExFreePoolWithTag(v264, 0x20534C53u);
          *((_QWORD *)v9 + 1) = 0LL;
        }
        v265 = (void *)*((_QWORD *)v9 + 3);
        if ( v265 )
        {
          ExFreePoolWithTag(v265, 0x20534C53u);
          *((_QWORD *)v9 + 3) = 0LL;
        }
        v266 = (void *)*((_QWORD *)v9 + 5);
        if ( v266 )
        {
          ExFreePoolWithTag(v266, 0x20534C53u);
          *((_QWORD *)v9 + 5) = 0LL;
        }
        ExFreePoolWithTag(v9, 0x20534C53u);
      }
      if ( v8 )
        ExFreePoolWithTag((PVOID)v8, 0x20534C53u);
      return (unsigned int)v193;
    case 2:
      v950 = 0;
      v375 = RtlUIntAdd(4u, 4u, &v1110);
      v193 = v375;
      if ( v375 < 0 )
      {
        v376 = v1038;
      }
      else
      {
        v376 = v1110;
        v1038 = v1110;
      }
      if ( v375 < 0
        || (v193 = RtlUIntAdd(0, v376, &v950), v193 < 0)
        || (v193 = RtlUIntAdd(v377 + 4, v377 + 8, &v995), v193 < 0)
        || (v1038 = v995, v193 = RtlUIntAdd(v950, v995, &v950), v193 < 0) )
      {
        v378 = v1081;
      }
      else
      {
        v378 = v950;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v1040 = 8;
      v193 = RtlUIntAdd(8u, v378, &v1040);
      if ( v193 < 0 )
        goto LABEL_777;
      v379 = (v1040 + 7) & 0xFFFFFFF8;
      if ( v379 < v1040 )
      {
        v193 = -1073741675;
      }
      else
      {
        v1042 = (v1040 + 7) & 0xFFFFFFF8;
        v193 = RtlUIntAdd(v379, 8u, &v1042);
        if ( v193 >= 0 )
        {
          v380 = v1042;
          goto LABEL_673;
        }
      }
      v380 = v995;
LABEL_673:
      if ( v193 < 0 )
        goto LABEL_777;
      v923 = 4;
      v193 = RtlUIntAdd(4u, v380, &v923);
      if ( v193 < 0
        || (v193 = RtlUIntAdd(v923, v381, &v923), v193 < 0)
        || (v193 = RtlUIntAdd(v923, v9[4], &v923), v193 < 0)
        || (v193 = RtlUIntAdd(v923, 4u, &v923), v193 < 0)
        || (v193 = RtlUIntAdd(v923, v9[8], &v923), v193 < 0) )
      {
        v383 = v1112;
      }
      else
      {
        v383 = v923;
        v1112 = v923;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v935 < v383 )
      {
        v1249 = 0LL;
      }
      else
      {
        v1249 = __rdtsc();
        qword_1406FB248 = v1249;
      }
      *(_DWORD *)Size = v382;
      if ( !v382 )
      {
        v193 = -1073741762;
        goto LABEL_699;
      }
      v384 = ExAllocatePoolWithTag(PagedPool, v382, 0x20534C53u);
      if ( !v384 )
      {
        v193 = -1073741801;
        goto LABEL_699;
      }
      *(_QWORD *)&Size[4] = v384;
      v385 = 0;
      v905 = 0;
      v1044 = 0;
      if ( &v1044 )
      {
        v193 = RtlULongLongAdd((ULONGLONG)v384, 4uLL, v1330);
        if ( v193 >= 0 )
        {
          if ( v387 + 2 > (_DWORD *)((char *)v387 + *(unsigned int *)Size) )
          {
            v193 = -1073741789;
            goto LABEL_699;
          }
          v388 = (_DWORD *)v1330[0];
          *v387 = v386;
          *v388 = v1044;
          v385 = ++v905;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v1251 = v1249;
      if ( !&v1251 )
        goto LABEL_1785;
      if ( *(_QWORD *)&Size[4] )
      {
        v389 = *(UINT **)&Size[4];
        v1215 = *(_QWORD *)&Size[4];
        if ( v385 )
        {
          do
          {
            v193 = RtlUIntAdd(4u, *v389, &v1114);
            if ( v193 < 0 )
              goto LABEL_699;
            v1010 = v1114;
            v193 = RtlULongLongAdd(v390, v1114, &v1215);
            if ( v193 < 0 )
              goto LABEL_699;
            v389 = (UINT *)v1215;
          }
          while ( v391 + 1 < v392 );
        }
        v193 = RtlULongLongAdd((ULONGLONG)v389, 4uLL, v1332);
        if ( v193 >= 0 )
        {
          if ( (unsigned __int64)(v393 + 3) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
          {
            v193 = -1073741789;
          }
          else
          {
            v394 = (unsigned __int64 *)v1332[0];
            *v393 = 8;
            *v394 = v1251;
            ++v905;
          }
        }
      }
      else
      {
        v773 = RtlUIntAdd(4u, 8u, &v1225);
        v774 = v1010;
        v193 = v773;
        if ( v773 >= 0 )
          v774 = v1225;
        v1010 = v774;
        if ( v773 >= 0 )
        {
          v193 = RtlUIntAdd(*(UINT *)Size, v774, (UINT *)Size);
          if ( v193 >= 0 )
          {
            ++v905;
            v193 = 0;
          }
        }
      }
      goto LABEL_699;
    case 4:
      v501 = sub_140679828(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      if ( v501 >= 0 )
        goto LABEL_326;
      v193 = v501;
      goto LABEL_416;
    case 5:
      if ( !v9 )
        goto LABEL_2280;
      if ( v912[1] )
      {
        if ( LODWORD(v912[0]) <= 3 )
        {
          v902 = -1073741811;
          v400 = -1073741811;
        }
        else
        {
          v395 = v912[1];
          v960 = v912[1];
          do
          {
            v902 = RtlULongLongAdd(v395, 4uLL, &v960);
            if ( v902 < 0 )
              goto LABEL_1009;
            v902 = RtlULongLongAdd(v960, v396, &v960);
            if ( v902 < 0 )
              goto LABEL_1009;
            v395 = v960;
          }
          while ( (unsigned int)(v397 + 1) < 3 );
          v902 = RtlULongLongAdd(v960, 4uLL, &v960);
          if ( v902 < 0 )
          {
LABEL_1009:
            v398 = v1169;
            v399 = v1277;
            goto LABEL_711;
          }
          v1169 = v398;
          if ( v398 )
            v399 = (_QWORD *)v960;
          else
            v399 = 0LL;
          v1277 = v399;
LABEL_711:
          if ( v902 >= 0 )
          {
            if ( v398 != 8 )
              goto LABEL_783;
            v1313 = *v399;
          }
          v400 = v902;
        }
      }
      else
      {
        v400 = -1073741811;
        v902 = -1073741811;
      }
      if ( v400 < 0 )
        goto LABEL_776;
      v401 = 1;
      RtlInitUnicodeString(&v1353, L"Security-SPP-GenuineLocalStatus");
      v402 = sub_140489CE0((unsigned int)&v1353, (unsigned int)&v1235, (unsigned int)&v1171, 4, (__int64)&v1103);
      v902 = v402;
      if ( v402 == -1073741772 )
      {
        v1210 = 0;
        goto LABEL_723;
      }
      if ( v402 >= 0 && (v1235 != 4 || !v1171) )
        v401 = 0;
      v1210 = v401;
      if ( v402 >= 0 )
      {
        if ( v401 )
          KeResetEvent(&stru_1402D5500);
LABEL_723:
        dword_1406FB1D4 = 1;
        do
        {
          v403 = KeWaitForSingleObject(&stru_1402D5500, UserRequest, 1, 1u, 0LL);
          v404 = v403;
        }
        while ( v403 == 257 );
        if ( v403 >= 0 && v403 != 192 )
        {
          do
          {
            v502 = KeWaitForSingleObject(&stru_1402D54C0, UserRequest, 1, 1u, 0LL);
            v404 = v502;
          }
          while ( v502 == 257 );
          if ( v502 >= 0 && v502 != 192 && v502 != 258 )
            KeReleaseMutex(&stru_1402D54C0, 0);
        }
        v919 = 0;
        v405 = RtlUIntAdd(4u, 4u, &v1173);
        v902 = v405;
        if ( v405 < 0 )
        {
          v406 = v975;
        }
        else
        {
          v406 = v1173;
          v975 = v1173;
        }
        if ( v405 < 0 )
          goto LABEL_1019;
        v405 = RtlUIntAdd(0, v406, &v919);
        v902 = v405;
        if ( v405 < 0 )
          goto LABEL_1019;
        v405 = RtlUIntAdd(v407 + 4, v407 + 8, &v1227);
        v902 = v405;
        if ( v405 < 0 )
          goto LABEL_1019;
        v975 = v1227;
        v405 = RtlUIntAdd(v919, v1227, &v919);
        v902 = v405;
        if ( v405 < 0
          || (v405 = RtlUIntAdd(4u, 4u, &v967), v902 = v405, v405 < 0)
          || (v975 = v967, v405 = RtlUIntAdd(v919, v967, &v919), v902 = v405, v405 < 0) )
        {
LABEL_1019:
          v408 = v1103;
        }
        else
        {
          v408 = v919;
        }
        if ( v405 < 0 )
          goto LABEL_774;
        v1073 = 8;
        v902 = RtlUIntAdd(8u, v408, &v1073);
        if ( v902 < 0 )
          goto LABEL_774;
        v410 = (v1073 + 7) & 0xFFFFFFF8;
        if ( v410 < v1073 )
        {
          v411 = -1073741675;
          v902 = -1073741675;
        }
        else
        {
          v1045 = (v1073 + 7) & 0xFFFFFFF8;
          v411 = RtlUIntAdd(v410, 8u, &v1045);
          v902 = v411;
          if ( v411 >= 0 )
          {
            v412 = v1045;
LABEL_740:
            if ( v411 >= 0 )
            {
              v925 = 4;
              v902 = RtlUIntAdd(4u, v412, &v925);
              if ( v902 >= 0 )
              {
                v902 = RtlUIntAdd(v925, v413, &v925);
                if ( v902 >= 0 )
                {
                  v902 = RtlUIntAdd(v925, v9[4], &v925);
                  if ( v902 >= 0 )
                  {
                    v902 = RtlUIntAdd(v925, 4u, &v925);
                    if ( v902 >= 0 )
                    {
                      v902 = RtlUIntAdd(v925, v9[8], &v925);
                      if ( v902 >= 0 )
                        v1273 = v925;
                    }
                  }
                }
              }
            }
            if ( v902 < 0 )
              goto LABEL_774;
            *(_DWORD *)Size = v409;
            if ( !v409 )
            {
              v902 = -1073741762;
              goto LABEL_774;
            }
            v414 = ExAllocatePoolWithTag(PagedPool, v409, 0x20534C53u);
            if ( !v414 )
            {
              v902 = -1073741801;
              goto LABEL_774;
            }
            *(_QWORD *)&Size[4] = v414;
            v415 = 0;
            v905 = 0;
            v1077 = v404 | 0x10000000;
            if ( &v1077 )
            {
              v902 = RtlULongLongAdd((ULONGLONG)v414, 4uLL, v1333);
              if ( v902 < 0 )
                goto LABEL_774;
              if ( v417 + 2 > (_DWORD *)((char *)v417 + *(unsigned int *)Size) )
                goto LABEL_783;
              v418 = (int *)v1333[0];
              *v417 = v416;
              *v418 = v1077;
              v415 = ++v905;
            }
            else
            {
              v902 = -1073741811;
            }
            if ( v902 < 0 )
              goto LABEL_774;
            v1247 = v1313;
            if ( &v1247 )
            {
              if ( *(_QWORD *)&Size[4] )
              {
                v419 = *(UINT **)&Size[4];
                v1186 = *(_QWORD *)&Size[4];
                if ( v415 )
                {
                  while ( 1 )
                  {
                    v420 = RtlUIntAdd(4u, *v419, &v1178);
                    v902 = v420;
                    if ( v420 < 0 )
                      break;
                    v997 = v1178;
                    v420 = RtlULongLongAdd(v421, v1178, &v1186);
                    v902 = v420;
                    if ( v420 < 0 )
                      break;
                    v419 = (UINT *)v1186;
                    if ( v422 + 1 >= v415 )
                      goto LABEL_761;
                  }
                }
                else
                {
LABEL_761:
                  v420 = RtlULongLongAdd((ULONGLONG)v419, 4uLL, v1347);
                  v902 = v420;
                  if ( v420 >= 0 )
                  {
                    if ( (unsigned __int64)(v423 + 3) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                      goto LABEL_783;
                    v424 = (_QWORD *)v1347[0];
                    *v423 = 8;
                    *v424 = v1247;
                    v420 = v902;
                    v415 = ++v905;
                  }
                }
              }
              else
              {
                v503 = RtlUIntAdd(4u, 8u, &v1212);
                v504 = v997;
                v902 = v503;
                if ( v503 >= 0 )
                  v504 = v1212;
                v997 = v504;
                if ( v503 < 0 )
                  goto LABEL_774;
                v420 = RtlUIntAdd(*(UINT *)Size, v504, (UINT *)Size);
                v415 = v905;
                v902 = v420;
                if ( v420 >= 0 )
                {
                  v415 = ++v905;
LABEL_765:
                  v1047 = dword_1406FB064;
                  if ( !&v1047 )
                  {
                    v902 = -1073741811;
                    goto LABEL_774;
                  }
                  if ( !*(_QWORD *)&Size[4] )
                  {
                    v505 = RtlUIntAdd(4u, 4u, &v1243);
                    v506 = v977;
                    v902 = v505;
                    if ( v505 >= 0 )
                      v506 = v1243;
                    v977 = v506;
                    if ( v505 >= 0 )
                    {
                      v902 = RtlUIntAdd(*(UINT *)Size, v506, (UINT *)Size);
                      if ( v902 >= 0 )
                      {
                        ++v905;
                        v902 = 0;
                      }
                    }
                    goto LABEL_774;
                  }
                  v425 = *(UINT **)&Size[4];
                  v1188 = *(_QWORD *)&Size[4];
                  if ( v415 )
                  {
                    while ( 1 )
                    {
                      v902 = RtlUIntAdd(4u, *v425, &v1180);
                      if ( v902 < 0 )
                        break;
                      v977 = v1180;
                      v902 = RtlULongLongAdd(v426, v1180, &v1188);
                      if ( v902 < 0 )
                        break;
                      v425 = (UINT *)v1188;
                      if ( v428 + 1 >= v427 )
                        goto LABEL_771;
                    }
LABEL_774:
                    v402 = v902;
                    goto LABEL_775;
                  }
LABEL_771:
                  v902 = RtlULongLongAdd((ULONGLONG)v425, 4uLL, v1335);
                  if ( v902 < 0 )
                    goto LABEL_774;
                  if ( (unsigned __int64)(v430 + 2) <= *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                  {
                    v431 = (int *)v1335[0];
                    *v430 = v429;
                    *v431 = v1047;
                    ++v905;
                    goto LABEL_774;
                  }
LABEL_783:
                  v902 = -1073741789;
                  goto LABEL_774;
                }
              }
            }
            else
            {
              v902 = -1073741811;
              v420 = -1073741811;
            }
            if ( v420 < 0 )
              goto LABEL_774;
            goto LABEL_765;
          }
        }
        v412 = v967;
        goto LABEL_740;
      }
LABEL_775:
      if ( v402 >= 0 )
      {
LABEL_325:
        v6 = (unsigned int *)v907;
        goto LABEL_326;
      }
      goto LABEL_776;
    case 6:
      if ( !v9 )
      {
LABEL_2280:
        v902 = -1073741811;
        goto LABEL_776;
      }
      if ( !v912[1] )
      {
        v507 = -1073741811;
        v902 = -1073741811;
        goto LABEL_1057;
      }
      if ( LODWORD(v912[0]) <= 3 )
      {
        v902 = -1073741811;
        v507 = -1073741811;
        goto LABEL_1057;
      }
      v508 = v912[1];
      v962 = v912[1];
      do
      {
        v902 = RtlULongLongAdd(v508, 4uLL, &v962);
        if ( v902 < 0 )
          goto LABEL_1051;
        v902 = RtlULongLongAdd(v962, v509, &v962);
        if ( v902 < 0 )
          goto LABEL_1051;
        v508 = v962;
      }
      while ( (unsigned int)(v510 + 1) < 3 );
      v902 = RtlULongLongAdd(v962, 4uLL, &v962);
      if ( v902 < 0 )
      {
LABEL_1051:
        v511 = v1214;
        v512 = v1279;
        goto LABEL_1052;
      }
      v512 = (_QWORD *)v962;
      v1214 = v511;
      if ( !v511 )
        v512 = 0LL;
      v1279 = v512;
LABEL_1052:
      if ( v902 >= 0 )
      {
        if ( v511 != 8 )
        {
          v902 = -1073741789;
          goto LABEL_1122;
        }
        v1299 = *v512;
      }
      v507 = v902;
LABEL_1057:
      if ( v507 < 0 )
        goto LABEL_776;
      Interval.QuadPart = -35000000LL;
      do
      {
        v513 = KeDelayExecutionThread(1, 1u, &Interval);
        v514 = v513;
      }
      while ( v513 == 257 );
      if ( v513 >= 0 && v513 != 192 )
      {
        Interval.QuadPart = -270000000LL;
        do
        {
          v515 = KeWaitForSingleObject(&stru_1402D54C0, UserRequest, 1, 1u, &Interval);
          v514 = v515;
        }
        while ( v515 == 257 );
        if ( v515 >= 0 && v515 != 192 && v515 != 258 )
          KeReleaseMutex(&stru_1402D54C0, 0);
      }
      v516 = RtlUIntAdd(4u, 4u, &v1182);
      v518 = v1075;
      v902 = v516;
      if ( v516 >= 0 )
        v518 = v1182;
      v1075 = v518;
      if ( v516 < 0 )
        goto LABEL_1077;
      v1049 = v518;
      v516 = RtlUIntAdd(v517, 8u, &v947);
      v902 = v516;
      v520 = v519;
      if ( v516 >= 0 )
        v520 = v947;
      v1075 = v520;
      if ( v516 < 0 )
      {
LABEL_1077:
        v521 = v947;
      }
      else
      {
        v516 = RtlUIntAdd(v519, v520, &v1049);
        v521 = v947;
        v902 = v516;
        if ( v516 >= 0 )
          v521 = v1049;
      }
      if ( v516 < 0 )
        goto LABEL_1122;
      v1051 = 8;
      v902 = RtlUIntAdd(8u, v521, &v1051);
      if ( v902 < 0 )
        goto LABEL_1122;
      v523 = (v1051 + 7) & 0xFFFFFFF8;
      if ( v523 >= v1051 )
      {
        v1078 = (v1051 + 7) & 0xFFFFFFF8;
        v525 = RtlUIntAdd(v523, 8u, &v1078);
        v524 = v947;
        if ( v525 >= 0 )
          v524 = v1078;
      }
      else
      {
        v524 = v947;
        v525 = -1073741675;
      }
      v902 = v525;
      if ( v525 >= 0 )
      {
        v922 = 4;
        v902 = RtlUIntAdd(4u, v524, &v922);
        if ( v902 >= 0 )
        {
          v902 = RtlUIntAdd(v922, v526, &v922);
          if ( v902 >= 0 )
          {
            v902 = RtlUIntAdd(v922, v9[4], &v922);
            if ( v902 >= 0 )
            {
              v902 = RtlUIntAdd(v922, 4u, &v922);
              if ( v902 >= 0 )
              {
                v902 = RtlUIntAdd(v922, v9[8], &v922);
                v527 = v1123;
                if ( v902 >= 0 )
                  v527 = v922;
                v1123 = v527;
              }
            }
          }
        }
      }
      if ( v902 < 0 )
        goto LABEL_1122;
      *(_DWORD *)Size = v522;
      if ( !v522 )
      {
        v902 = -1073741762;
        goto LABEL_1122;
      }
      v528 = ExAllocatePoolWithTag(PagedPool, v522, 0x20534C53u);
      if ( !v528 )
      {
        v902 = -1073741801;
        goto LABEL_1122;
      }
      *(_QWORD *)&Size[4] = v528;
      v529 = 0;
      v905 = 0;
      v1055 = v514 | 0x10000000;
      if ( &v1055 )
      {
        v902 = RtlULongLongAdd((ULONGLONG)v528, 4uLL, v1357);
        v531 = v902;
        if ( v902 >= 0 )
        {
          if ( v530 + 2 > (_DWORD *)((char *)v530 + *(unsigned int *)Size) )
          {
            v902 = -1073741789;
            goto LABEL_1122;
          }
          v532 = (int *)v1357[0];
          *v530 = 4;
          *v532 = v1055;
          v529 = ++v905;
        }
      }
      else
      {
        v531 = -1073741811;
        v902 = -1073741811;
      }
      if ( v531 >= 0 )
      {
        v1258 = v1299;
        if ( &v1258 )
        {
          if ( *(_QWORD *)&Size[4] )
          {
            v535 = *(UINT **)&Size[4];
            v536 = 0;
            v1192 = *(_QWORD *)&Size[4];
            if ( v529 )
            {
              while ( 1 )
              {
                v537 = RtlUIntAdd(4u, *v535, &v1126);
                v902 = v537;
                if ( v537 >= 0 )
                  v539 = v1126;
                v1013 = v539;
                if ( v537 < 0 )
                  break;
                v902 = RtlULongLongAdd(v538, v539, &v1192);
                if ( v902 < 0 )
                  break;
                v535 = (UINT *)v1192;
                if ( ++v536 >= v540 )
                  goto LABEL_1117;
              }
            }
            else
            {
LABEL_1117:
              v902 = RtlULongLongAdd((ULONGLONG)v535, 4uLL, v1337);
              if ( v902 >= 0 )
              {
                if ( (unsigned __int64)(v541 + 3) <= *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                {
                  v542 = (_QWORD *)v1337[0];
                  *v541 = 8;
                  *v542 = v1258;
                  ++v905;
                }
                else
                {
                  v902 = -1073741789;
                }
              }
            }
          }
          else
          {
            v533 = RtlUIntAdd(4u, 8u, &v1124);
            v534 = v1013;
            v902 = v533;
            if ( v533 >= 0 )
              v534 = v1124;
            v1013 = v534;
            if ( v533 >= 0 )
            {
              v902 = RtlUIntAdd(*(UINT *)Size, v534, (UINT *)Size);
              if ( v902 >= 0 )
              {
                ++v905;
                v902 = 0;
              }
            }
          }
        }
        else
        {
          v902 = -1073741811;
        }
      }
LABEL_1122:
      if ( v902 < 0 )
        goto LABEL_776;
      goto LABEL_325;
    case 7:
      v1194.QuadPart = 0LL;
      if ( !v9 )
      {
        v6 = (unsigned int *)v907;
        v193 = -1073741811;
        v7 = (UINT *)v909;
        v8 = 0LL;
        v5 = 0LL;
        goto LABEL_387;
      }
      if ( !v912[1] )
      {
        v193 = -1073741811;
        goto LABEL_1143;
      }
      if ( LODWORD(v912[0]) <= 3 )
      {
        v193 = -1073741811;
        goto LABEL_1143;
      }
      v543 = v912[1];
      v964 = v912[1];
      do
      {
        v193 = RtlULongLongAdd(v543, 4uLL, &v964);
        if ( v193 < 0 )
          goto LABEL_1138;
        v193 = RtlULongLongAdd(v964, v544, &v964);
        if ( v193 < 0 )
          goto LABEL_1138;
        v543 = v964;
      }
      while ( (unsigned int)(v545 + 1) < 3 );
      v193 = RtlULongLongAdd(v964, 4uLL, &v964);
      if ( v193 < 0 )
      {
LABEL_1138:
        v546 = v1128;
        v547 = v1281;
        goto LABEL_1139;
      }
      v547 = (_QWORD *)v964;
      v1128 = v546;
      if ( !v546 )
        v547 = 0LL;
      v1281 = v547;
LABEL_1139:
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v546 != 8 )
      {
        v193 = -1073741789;
        goto LABEL_1205;
      }
      v1309 = *v547;
LABEL_1143:
      if ( v193 < 0 )
        goto LABEL_777;
      v1194.QuadPart = -270000000LL;
      v548 = KeWaitForSingleObject(&stru_1402D54C0, UserRequest, 1, 0, &v1194);
      if ( v548 >= 0 && v548 != 192 && v548 != 258 )
      {
        if ( stru_1402D5500.Header.SignalState || !dword_1406FB1CC )
        {
          v549 = MEMORY[0xFFFFF78000000320];
          TimeIncrement = KeQueryTimeIncrement();
          dword_1406FB1CC = 1;
          qword_1406FB208 = v549 * TimeIncrement / 10000;
          KeResetEvent(&stru_1402D5500);
        }
        KeReleaseMutex(&stru_1402D54C0, 0);
      }
      v551 = RtlUIntAdd(4u, 4u, &v1130);
      v553 = v1088;
      v193 = v551;
      if ( v551 >= 0 )
        v553 = v1130;
      v1088 = v553;
      if ( v551 < 0 )
        goto LABEL_1160;
      v1057 = v553;
      v554 = RtlUIntAdd(v552, 8u, &v942);
      v556 = v555;
      v193 = v554;
      if ( v554 >= 0 )
        v556 = v942;
      v1088 = v556;
      if ( v554 < 0 )
      {
LABEL_1160:
        v558 = v942;
      }
      else
      {
        v557 = RtlUIntAdd(v555, v556, &v1057);
        v558 = v942;
        v193 = v557;
        if ( v557 >= 0 )
          v558 = v1057;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v1080 = 8;
      v193 = RtlUIntAdd(8u, v558, &v1080);
      if ( v193 < 0 )
        goto LABEL_1175;
      v560 = (v1080 + 7) & 0xFFFFFFF8;
      if ( v560 >= v1080 )
      {
        v1059 = (v1080 + 7) & 0xFFFFFFF8;
        v562 = RtlUIntAdd(v560, 8u, &v1059);
        v561 = v942;
        v193 = v562;
        if ( v562 >= 0 )
          v561 = v1059;
      }
      else
      {
        v561 = v942;
        v193 = -1073741675;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v930 = 4;
      v193 = RtlUIntAdd(4u, v561, &v930);
      if ( v193 >= 0 )
      {
        v193 = RtlUIntAdd(v930, v563, &v930);
        if ( v193 >= 0 )
        {
          v193 = RtlUIntAdd(v930, v9[4], &v930);
          if ( v193 >= 0 )
          {
            v193 = RtlUIntAdd(v930, 4u, &v930);
            if ( v193 >= 0 )
            {
              v193 = RtlUIntAdd(v930, v9[8], &v930);
              v564 = v1134;
              if ( v193 >= 0 )
                v564 = v930;
              v1134 = v564;
            }
          }
        }
      }
LABEL_1175:
      if ( v193 < 0 )
        goto LABEL_777;
      *(_DWORD *)Size = v559;
      if ( !v559 )
      {
        v193 = -1073741762;
        goto LABEL_1205;
      }
      v565 = ExAllocatePoolWithTag(PagedPool, v559, 0x20534C53u);
      if ( !v565 )
      {
        v193 = -1073741801;
        goto LABEL_1205;
      }
      *(_QWORD *)&Size[4] = v565;
      v566 = 0;
      v905 = 0;
      v1096 = 0x10000000;
      if ( &v1096 )
      {
        v193 = RtlULongLongAdd((ULONGLONG)v565, 4uLL, &v1349);
        if ( v193 >= 0 )
        {
          if ( v568 + 2 > (_DWORD *)((char *)v568 + *(unsigned int *)Size) )
          {
            v193 = -1073741789;
            goto LABEL_1205;
          }
          v569 = (_DWORD *)v1349;
          *v568 = v567;
          *v569 = v1096;
          v566 = ++v905;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v1250 = v1309;
      if ( !&v1250 )
        goto LABEL_1607;
      if ( *(_QWORD *)&Size[4] )
      {
        v572 = *(UINT **)&Size[4];
        v573 = 0;
        v1196 = *(_QWORD *)&Size[4];
        if ( v566 )
        {
          while ( 1 )
          {
            v574 = RtlUIntAdd(4u, *v572, &v1138);
            v193 = v574;
            if ( v574 >= 0 )
              v576 = v1138;
            v981 = v576;
            if ( v574 < 0 )
              break;
            v193 = RtlULongLongAdd(v575, v576, &v1196);
            if ( v193 < 0 )
              break;
            v572 = (UINT *)v1196;
            if ( ++v573 >= v577 )
              goto LABEL_1200;
          }
        }
        else
        {
LABEL_1200:
          v193 = RtlULongLongAdd((ULONGLONG)v572, 4uLL, v1339);
          if ( v193 >= 0 )
          {
            if ( (unsigned __int64)(v578 + 3) <= *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
            {
              v579 = (_QWORD *)v1339[0];
              *v578 = 8;
              *v579 = v1250;
              ++v905;
            }
            else
            {
              v193 = -1073741789;
            }
          }
        }
      }
      else
      {
        v570 = RtlUIntAdd(4u, 8u, &v1136);
        v571 = v981;
        v193 = v570;
        if ( v570 >= 0 )
          v571 = v1136;
        v981 = v571;
        if ( v570 >= 0 )
        {
          v193 = RtlUIntAdd(*(UINT *)Size, v571, (UINT *)Size);
          if ( v193 >= 0 )
          {
            ++v905;
            v193 = 0;
          }
        }
      }
      goto LABEL_1205;
    case 15:
      v270 = sub_140516C6C(v912, v105, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v270;
      if ( v270 < 0 )
        goto LABEL_416;
      goto LABEL_326;
    case 16:
      v580 = SeExports;
      v581 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v582 = RtlLengthSid(v580->SeLocalServiceSid) + v581;
      v583 = v582 + RtlLengthSid(v580->SeAliasAdminsSid) + 32;
      v584 = (ACL *)ExAllocatePoolWithTag(PagedPool, v583, 0x20534C53u);
      v587 = v584;
      if ( v584 )
      {
        v193 = RtlCreateAcl(v584, v583, 2u);
        if ( v193 >= 0 )
        {
          v193 = RtlAddAccessAllowedAce(v587, 2u, 0x20u, SeExports->SeLocalServiceSid);
          if ( v193 >= 0 )
          {
            v193 = RtlAddAccessAllowedAce(v587, 2u, 0x20u, SeExports->SeNetworkServiceSid);
            if ( v193 >= 0 )
            {
              v193 = RtlAddAccessAllowedAce(v587, 2u, 0x20u, SeExports->SeAliasAdminsSid);
              if ( v193 >= 0 )
              {
                v193 = RtlCreateSecurityDescriptor(v1366, 1u);
                if ( v193 >= 0 )
                {
                  v193 = RtlSetDaclSecurityDescriptor(v1366, 1u, v587, 0);
                  if ( v193 >= 0 )
                  {
                    SeCaptureSubjectContext(&SubjectSecurityContext);
                    v588 = SeAccessCheck(
                             v1366,
                             &SubjectSecurityContext,
                             0,
                             0x20u,
                             0,
                             0LL,
                             (PGENERIC_MAPPING)&IopFileMapping,
                             1,
                             &v1270,
                             &v1140);
                    SeReleaseSubjectContext(&SubjectSecurityContext);
                    if ( !v588 )
                      v193 = v1140;
                  }
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v587, 0x20534C53u);
        if ( v193 >= 0 )
        {
          v1142 = 0;
          v1199 = 0;
          v1198 = 8;
          v193 = 0;
          v589 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1198, 8u, &v1142) >= 0
              && (v1199 & 0x20) != 0;
          v6 = (unsigned int *)v907;
          v590 = *((_DWORD *)v907 + 4);
          if ( v590 == 160
            && !memcmp(qword_1406A5010, *((const void **)v907 + 3), 0xA0uLL)
            && v9[4] == 160
            && !memcmp(qword_1406A49D0, *((const void **)v9 + 3), 0xA0uLL)
            && *((_DWORD *)v907 + 8) == 8
            && **((_QWORD **)v907 + 5) == 0x35DCEB18766AABAALL
            && v9[8] == 8
            && **((_QWORD **)v9 + 5) == 0x14CEA8BAE086077CLL )
          {
            goto LABEL_1245;
          }
          if ( !v589
            || v590 != 160
            || memcmp(qword_1406A4C50, *((const void **)v907 + 3), 0xA0uLL)
            || v9[4] != 160
            || memcmp(qword_1406A4890, *((const void **)v9 + 3), 0xA0uLL)
            || *((_DWORD *)v907 + 8) != 8
            || **((_QWORD **)v907 + 5) != 0xF10D668DB2BB8BB9uLL
            || v9[8] != 8
            || **((_QWORD **)v9 + 5) != 0x768DFD321621EA95LL )
          {
            v193 = -2147024891;
          }
          if ( v193 >= 0 )
          {
LABEL_1245:
            v193 = 0;
            v1019[1] = 0;
            UpdateFileEaAllowedExt_0 = QueryUpdateFileEaAllowedExt_0();
            if ( UpdateFileEaAllowedExt_0 == -1073741637
              || (v193 = UpdateFileEaAllowedExt_0, UpdateFileEaAllowedExt_0 >= 0) )
            {
              if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 7) == 0 )
                v193 = -2147024891;
            }
          }
LABEL_1210:
          if ( v193 < 0 )
            goto LABEL_416;
          v193 = sub_14067C9CC(v912, v585, v586, &v905);
          if ( v193 < 0 )
            goto LABEL_416;
          goto LABEL_326;
        }
      }
      else
      {
        v193 = -1073741801;
      }
      v6 = (unsigned int *)v907;
      goto LABEL_1210;
    case 17:
      v592 = SeExports;
      v593 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v594 = RtlLengthSid(v592->SeLocalServiceSid) + v593;
      v595 = v594 + RtlLengthSid(v592->SeAliasAdminsSid) + 32;
      v596 = (ACL *)ExAllocatePoolWithTag(PagedPool, v595, 0x20534C53u);
      v599 = v596;
      if ( v596 )
      {
        v193 = RtlCreateAcl(v596, v595, 2u);
        if ( v193 >= 0 )
        {
          v193 = RtlAddAccessAllowedAce(v599, 2u, 0x20u, SeExports->SeLocalServiceSid);
          if ( v193 >= 0 )
          {
            v193 = RtlAddAccessAllowedAce(v599, 2u, 0x20u, SeExports->SeNetworkServiceSid);
            if ( v193 >= 0 )
            {
              v193 = RtlAddAccessAllowedAce(v599, 2u, 0x20u, SeExports->SeAliasAdminsSid);
              if ( v193 >= 0 )
              {
                v193 = RtlCreateSecurityDescriptor(v1364, 1u);
                if ( v193 >= 0 )
                {
                  v193 = RtlSetDaclSecurityDescriptor(v1364, 1u, v599, 0);
                  if ( v193 >= 0 )
                  {
                    SeCaptureSubjectContext(&v1363);
                    v600 = SeAccessCheck(
                             v1364,
                             &v1363,
                             0,
                             0x20u,
                             0,
                             0LL,
                             (PGENERIC_MAPPING)&IopFileMapping,
                             1,
                             v1271,
                             &v1144);
                    SeReleaseSubjectContext(&v1363);
                    if ( !v600 )
                      v193 = v1144;
                  }
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v599, 0x20534C53u);
        if ( v193 >= 0 )
        {
          v1146 = 0;
          v1202 = 0;
          v1201 = 8;
          v193 = 0;
          v601 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1201, 8u, &v1146) >= 0
              && (v1202 & 0x20) != 0;
          v6 = (unsigned int *)v907;
          v602 = *((_DWORD *)v907 + 4);
          if ( v602 == 160
            && !memcmp(qword_1406A5010, *((const void **)v907 + 3), 0xA0uLL)
            && v9[4] == 160
            && !memcmp(qword_1406A49D0, *((const void **)v9 + 3), 0xA0uLL)
            && *((_DWORD *)v907 + 8) == 8
            && **((_QWORD **)v907 + 5) == 0x35DCEB18766AABAALL
            && v9[8] == 8
            && **((_QWORD **)v9 + 5) == 0x14CEA8BAE086077CLL )
          {
            goto LABEL_1288;
          }
          if ( !v601
            || v602 != 160
            || memcmp(qword_1406A4C50, *((const void **)v907 + 3), 0xA0uLL)
            || v9[4] != 160
            || memcmp(qword_1406A4890, *((const void **)v9 + 3), 0xA0uLL)
            || *((_DWORD *)v907 + 8) != 8
            || **((_QWORD **)v907 + 5) != 0xF10D668DB2BB8BB9uLL
            || v9[8] != 8
            || **((_QWORD **)v9 + 5) != 0x768DFD321621EA95LL )
          {
            v193 = -2147024891;
          }
          if ( v193 >= 0 )
          {
LABEL_1288:
            v193 = 0;
            v1020[1] = 0;
            v603 = QueryUpdateFileEaAllowedExt_0();
            if ( v603 == -1073741637 || (v193 = v603, v603 >= 0) )
            {
              if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 7) == 0 )
                v193 = -2147024891;
            }
          }
LABEL_1253:
          if ( v193 < 0 )
            goto LABEL_416;
          v193 = sub_14067BCE0(v912, v597, v598, &v905);
          if ( v193 < 0 )
            goto LABEL_416;
          goto LABEL_326;
        }
      }
      else
      {
        v193 = -1073741801;
      }
      v6 = (unsigned int *)v907;
      goto LABEL_1253;
    case 18:
      v1278 = __rdtsc();
      qword_1406FB160 = v1278;
      v951 = 0;
      v752 = RtlUIntAdd(4u, 4u, &v1106);
      v753 = v1034;
      v193 = v752;
      if ( v752 >= 0 )
        v753 = v1106;
      v1034 = v753;
      if ( v752 < 0 )
        goto LABEL_1755;
      v193 = RtlUIntAdd(0, v753, &v951);
      if ( v193 < 0 )
        goto LABEL_1755;
      v755 = RtlUIntAdd(v754 + 4, v754 + 8, &v971);
      v193 = v755;
      if ( v755 >= 0 )
        v756 = v971;
      v1034 = v756;
      if ( v755 < 0 )
      {
LABEL_1755:
        v757 = v971;
      }
      else
      {
        v193 = RtlUIntAdd(v951, v756, &v951);
        v757 = v971;
        if ( v193 >= 0 )
          v757 = v951;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      *(_DWORD *)Size = v757;
      if ( !v757 )
      {
        v193 = -1073741762;
        goto LABEL_699;
      }
      v758 = ExAllocatePoolWithTag(PagedPool, v757, 0x20534C53u);
      if ( !v758 )
      {
        v193 = -1073741801;
        goto LABEL_699;
      }
      *(_QWORD *)&Size[4] = v758;
      v759 = 0;
      v905 = 0;
      v1036 = 0;
      if ( &v1036 )
      {
        v193 = RtlULongLongAdd((ULONGLONG)v758, 4uLL, v1321);
        if ( v193 >= 0 )
        {
          if ( v761 + 2 > (_DWORD *)((char *)v761 + *(unsigned int *)Size) )
          {
            v193 = -1073741789;
            goto LABEL_699;
          }
          v762 = (_DWORD *)v1321[0];
          *v761 = v760;
          *v762 = v1036;
          v759 = ++v905;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 >= 0 )
      {
        v1246 = v1278;
        if ( &v1246 )
        {
          if ( *(_QWORD *)&Size[4] )
          {
            v765 = *(UINT **)&Size[4];
            v766 = 0;
            v1213 = *(_QWORD *)&Size[4];
            if ( v759 )
            {
              while ( 1 )
              {
                v767 = RtlUIntAdd(4u, *v765, &v1221);
                v193 = v767;
                if ( v767 >= 0 )
                  v769 = v1221;
                v1008 = v769;
                if ( v767 < 0 )
                  break;
                v193 = RtlULongLongAdd(v768, v769, &v1213);
                if ( v193 < 0 )
                  break;
                v765 = (UINT *)v1213;
                if ( ++v766 >= v770 )
                  goto LABEL_1781;
              }
            }
            else
            {
LABEL_1781:
              v193 = RtlULongLongAdd((ULONGLONG)v765, 4uLL, v1328);
              if ( v193 >= 0 )
              {
                if ( (unsigned __int64)(v771 + 3) <= *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                {
                  v772 = (unsigned __int64 *)v1328[0];
                  *v771 = 8;
                  *v772 = v1246;
                  ++v905;
                }
                else
                {
                  v193 = -1073741789;
                }
              }
            }
          }
          else
          {
            v763 = RtlUIntAdd(4u, 8u, &v1108);
            v764 = v1008;
            v193 = v763;
            if ( v763 >= 0 )
              v764 = v1108;
            v1008 = v764;
            if ( v763 >= 0 )
            {
              v193 = RtlUIntAdd(*(UINT *)Size, v764, (UINT *)Size);
              if ( v193 >= 0 )
              {
                ++v905;
                v193 = 0;
              }
            }
          }
        }
        else
        {
LABEL_1785:
          v193 = -1073741811;
        }
LABEL_699:
        v194 = v193 < 0;
        goto LABEL_324;
      }
      goto LABEL_777;
    case 22:
      v666 = v912[0];
      if ( !v912[1] )
      {
        v193 = -1073741811;
        goto LABEL_1527;
      }
      if ( LODWORD(v912[0]) <= 3 )
      {
        v193 = -1073741811;
        goto LABEL_1527;
      }
      v667 = v912[1];
      v974 = v912[1];
      do
      {
        v193 = RtlULongLongAdd(v667, 4uLL, &v974);
        if ( v193 < 0 )
          goto LABEL_1522;
        v193 = RtlULongLongAdd(v974, v668, &v974);
        if ( v193 < 0 )
          goto LABEL_1522;
        v667 = v974;
      }
      while ( (unsigned int)(v669 + 1) < 3 );
      v193 = RtlULongLongAdd(v974, 4uLL, &v974);
      if ( v193 < 0 )
      {
LABEL_1522:
        v670 = v1168;
        v671 = v1289;
        goto LABEL_1523;
      }
      v671 = (_QWORD *)v974;
      v1168 = v670;
      if ( !v670 )
        v671 = 0LL;
      v1289 = v671;
LABEL_1523:
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v670 != 8 )
      {
        v193 = -1073741789;
        goto LABEL_1205;
      }
      v1315 = *v671;
LABEL_1527:
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v912[1] )
      {
        if ( v666 > 4 )
        {
          v672 = v912[1];
          v976 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v672, 4uLL, &v976);
            if ( v193 < 0 )
              goto LABEL_1540;
            v193 = RtlULongLongAdd(v976, v673, &v976);
            if ( v193 < 0 )
              goto LABEL_1540;
            v672 = v976;
          }
          while ( (unsigned int)(v674 + 1) < 4 );
          v193 = RtlULongLongAdd(v976, 4uLL, &v976);
          if ( v193 < 0 )
          {
LABEL_1540:
            v675 = v1170;
            v676 = v1311;
            goto LABEL_1541;
          }
          v676 = (void **)v976;
          v1170 = v675;
          if ( !v675 )
            v676 = 0LL;
          v1311 = v676;
LABEL_1541:
          if ( v193 < 0 )
            goto LABEL_777;
          if ( v675 != 8 )
          {
            v193 = -1073741762;
            goto LABEL_1205;
          }
          v1291 = *v676;
          v1260 = v1291;
        }
        else
        {
          v193 = -1073741811;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v912[1] )
      {
        if ( v666 > 5 )
        {
          v677 = v912[1];
          v978 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v677, 4uLL, &v978);
            if ( v193 < 0 )
              goto LABEL_1558;
            v193 = RtlULongLongAdd(v978, v678, &v978);
            if ( v193 < 0 )
              goto LABEL_1558;
            v677 = v978;
          }
          while ( (unsigned int)(v679 + 1) < 5 );
          v193 = RtlULongLongAdd(v978, 4uLL, &v978);
          if ( v193 < 0 )
          {
LABEL_1558:
            v680 = v1172;
            v681 = v1305;
            goto LABEL_1559;
          }
          v681 = (UINT *)v978;
          v1172 = v680;
          if ( !v680 )
            v681 = 0LL;
          v1305 = v681;
LABEL_1559:
          if ( v193 < 0 )
            goto LABEL_777;
          if ( v680 != 4 )
          {
            v193 = -1073741789;
            goto LABEL_1205;
          }
          v954 = *v681;
        }
        else
        {
          v193 = -1073741811;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v954 != 16 )
      {
        v193 = -1073741762;
        goto LABEL_777;
      }
      if ( !v1260 )
        goto LABEL_1607;
      v682 = ObReferenceObjectByHandle(v1260, 0, (POBJECT_TYPE)IoFileObjectType, 1, &v1293, 0LL);
      v683 = (struct _FILE_OBJECT *)v1293;
      v193 = v682;
      if ( v682 < 0 )
        goto LABEL_1584;
      v684 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
      if ( !v684 )
      {
        v193 = -1073741801;
        goto LABEL_1584;
      }
      v193 = FsRtlKernelFsControlFile(v683, v684, 0x248u, (__int64)&v918);
      if ( v193 < 0 )
        goto LABEL_1583;
      if ( v918 < 0x40 )
      {
        v193 = -1073741762;
        goto LABEL_1583;
      }
      pcbLength[0] = *v684;
      if ( v683->WriteAccess )
      {
        v193 = FsRtlKernelFsControlFile(v683, v684, 0x248u, (__int64)&v918);
        if ( v193 < 0 )
          goto LABEL_1583;
        if ( v918 < 8 )
        {
          v193 = -1073741762;
          goto LABEL_1583;
        }
        v685 = *v684;
      }
      else
      {
        v193 = FsRtlKernelFsControlFile(v683, v684, 0x248u, (__int64)&v918);
        if ( v193 < 0 )
          goto LABEL_1583;
        if ( v918 < 0x40 )
        {
          v193 = -1073741762;
          goto LABEL_1583;
        }
        v685 = v684[3];
      }
      pcbLength[1] = v685;
      v1319 = *(_OWORD *)pcbLength;
LABEL_1583:
      ExFreePoolWithTag(v684, 0x20534C53u);
LABEL_1584:
      if ( v683 )
        ObfDereferenceObject(v683);
      if ( v193 < 0 )
        goto LABEL_777;
      v952 = 0;
      v686 = RtlUIntAdd(4u, 8u, &v1174);
      v687 = v1028;
      v193 = v686;
      if ( v686 >= 0 )
        v687 = v1174;
      v1028 = v687;
      if ( v686 < 0 )
        goto LABEL_1205;
      v193 = RtlUIntAdd(0, v687, &v952);
      if ( v193 < 0 )
        goto LABEL_1205;
      v688 = RtlUIntAdd(4u, v954, &v1107);
      v193 = v688;
      if ( v688 >= 0 )
        v689 = v1107;
      v1028 = v689;
      if ( v688 < 0 )
        goto LABEL_1205;
      v193 = RtlUIntAdd(v952, v689, &v952);
      if ( v193 < 0 )
        goto LABEL_1205;
      *(_DWORD *)Size = v952;
      if ( !v952 )
      {
        v193 = -1073741762;
        goto LABEL_1205;
      }
      v690 = ExAllocatePoolWithTag(PagedPool, v952, 0x20534C53u);
      if ( !v690 )
      {
        v193 = -1073741801;
        goto LABEL_1205;
      }
      *(_QWORD *)&Size[4] = v690;
      v691 = 0;
      v905 = 0;
      v1254 = v1315;
      if ( &v1254 )
      {
        v193 = RtlULongLongAdd((ULONGLONG)v690, 4uLL, v1323);
        if ( v193 >= 0 )
        {
          if ( v692 + 3 > (_DWORD *)((char *)v692 + *(unsigned int *)Size) )
          {
            v193 = -1073741789;
            goto LABEL_1205;
          }
          v693 = (_QWORD *)v1323[0];
          *v692 = 8;
          *v693 = v1254;
          v691 = ++v905;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      if ( &v1319 )
      {
        if ( !v954 )
          goto LABEL_1607;
      }
      else if ( v954 )
      {
        goto LABEL_1607;
      }
      if ( *(_QWORD *)&Size[4] )
      {
        v696 = *(UINT **)&Size[4];
        v697 = 0;
        v1209 = *(_QWORD *)&Size[4];
        if ( v691 )
        {
          v698 = v985;
          while ( 1 )
          {
            v699 = RtlUIntAdd(4u, *v696, &v1113);
            v193 = v699;
            if ( v699 >= 0 )
              v698 = v1113;
            v985 = v698;
            if ( v699 < 0 )
              break;
            v193 = RtlULongLongAdd(v700, v698, &v1209);
            if ( v193 < 0 )
              break;
            v696 = (UINT *)v1209;
            if ( ++v697 >= v701 )
              goto LABEL_1622;
          }
        }
        else
        {
LABEL_1622:
          v193 = RtlULongLongAdd((ULONGLONG)v696, 4uLL, v1324);
          if ( v193 >= 0 )
          {
            if ( (unsigned __int64)v702 + v703 + 4 <= *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
            {
              v704 = (void *)v1324[0];
              *v702 = v703;
              memmove(v704, &v1319, v703);
              ++v905;
            }
            else
            {
              v193 = -1073741789;
            }
          }
        }
      }
      else
      {
        v694 = RtlUIntAdd(4u, v954, &v1111);
        v695 = v985;
        v193 = v694;
        if ( v694 >= 0 )
          v695 = v1111;
        v985 = v695;
        if ( v694 >= 0 )
        {
          v193 = RtlUIntAdd(*(UINT *)Size, v695, (UINT *)Size);
          if ( v193 >= 0 )
          {
            ++v905;
            v193 = 0;
          }
        }
      }
      goto LABEL_1205;
    case 23:
      v604 = SeExports;
      v605 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v606 = RtlLengthSid(v604->SeLocalServiceSid) + v605;
      v607 = v606 + RtlLengthSid(v604->SeAliasAdminsSid) + 32;
      v608 = (ACL *)ExAllocatePoolWithTag(PagedPool, v607, 0x20534C53u);
      v609 = v608;
      if ( !v608 )
      {
        v193 = -1073741801;
LABEL_1295:
        v6 = (unsigned int *)v907;
        goto LABEL_1296;
      }
      v193 = RtlCreateAcl(v608, v607, 2u);
      if ( v193 >= 0 )
      {
        v193 = RtlAddAccessAllowedAce(v609, 2u, 0x20u, SeExports->SeLocalServiceSid);
        if ( v193 >= 0 )
        {
          v193 = RtlAddAccessAllowedAce(v609, 2u, 0x20u, SeExports->SeNetworkServiceSid);
          if ( v193 >= 0 )
          {
            v193 = RtlAddAccessAllowedAce(v609, 2u, 0x20u, SeExports->SeAliasAdminsSid);
            if ( v193 >= 0 )
            {
              v193 = RtlCreateSecurityDescriptor(v1365, 1u);
              if ( v193 >= 0 )
              {
                v193 = RtlSetDaclSecurityDescriptor(v1365, 1u, v609, 0);
                if ( v193 >= 0 )
                {
                  SeCaptureSubjectContext(&v1360);
                  v611 = SeAccessCheck(
                           v1365,
                           &v1360,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &v1081,
                           &v1015);
                  SeReleaseSubjectContext(&v1360);
                  if ( !v611 )
                    v193 = v1015;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v609, 0x20534C53u);
      if ( v193 < 0 )
        goto LABEL_1295;
      v1150 = 0;
      v1205 = 0;
      v1204 = 8;
      v193 = 0;
      v612 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1204, 8u, &v1150) >= 0 && (v1205 & 0x20) != 0;
      v613 = (const void **)v907;
      v614 = *((_DWORD *)v907 + 4);
      if ( v614 != 160 )
      {
        v615 = v908;
        goto LABEL_1330;
      }
      v615 = v908;
      if ( memcmp(qword_1406A5010, *((const void **)v907 + 3), 0xA0uLL) || *((_DWORD *)v908 + 4) != 160 )
        goto LABEL_1329;
      v65 = memcmp(qword_1406A49D0, *((const void **)v908 + 3), 0xA0uLL) == 0;
      v613 = (const void **)v907;
      if ( v65 && *((_DWORD *)v907 + 8) == 8 )
      {
        if ( **((_QWORD **)v907 + 5) == 0x35DCEB18766AABAALL
          && *((_DWORD *)v908 + 8) == 8
          && **((_QWORD **)v908 + 5) == 0x14CEA8BAE086077CLL )
        {
          v9 = (unsigned int *)v908;
LABEL_1321:
          v6 = (unsigned int *)v907;
LABEL_1322:
          v193 = 0;
          v1022 = 0;
          v616 = QueryUpdateFileEaAllowedExt_0();
          if ( v616 == -1073741637 || (v193 = v616, v616 >= 0) && v1022 != 1 )
          {
            if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 7) == 0 )
              v193 = -2147024891;
          }
LABEL_1296:
          if ( v193 < 0 )
            goto LABEL_416;
          v610 = v912[0];
          if ( v912[1] )
          {
            if ( LODWORD(v912[0]) > 3 )
            {
              v617 = v912[1];
              v966 = v912[1];
              do
              {
                v193 = RtlULongLongAdd(v617, 4uLL, &v966);
                if ( v193 < 0 )
                  goto LABEL_1374;
                v193 = RtlULongLongAdd(v966, v618, &v966);
                if ( v193 < 0 )
                  goto LABEL_1374;
                v617 = v966;
              }
              while ( (unsigned int)(v619 + 1) < 3 );
              v193 = RtlULongLongAdd(v966, 4uLL, &v966);
              if ( v193 < 0 )
              {
LABEL_1374:
                v620 = v1152;
                v621 = v1283;
                goto LABEL_1375;
              }
              v621 = (void **)v966;
              v1152 = v620;
              if ( !v620 )
                v621 = 0LL;
              v1283 = v621;
LABEL_1375:
              if ( v193 < 0 )
                goto LABEL_1508;
              if ( v620 != 8 )
              {
                v193 = -1073741762;
                goto LABEL_1508;
              }
              v1301 = *v621;
              Handle = v1301;
            }
            else
            {
              v193 = -1073741811;
            }
          }
          else
          {
            v193 = -1073741811;
          }
          if ( v193 < 0 )
            goto LABEL_1508;
          if ( v912[1] )
          {
            if ( v610 > 4 )
            {
              v622 = v912[1];
              v968 = v912[1];
              do
              {
                v193 = RtlULongLongAdd(v622, 4uLL, &v968);
                if ( v193 < 0 )
                  goto LABEL_1392;
                v193 = RtlULongLongAdd(v968, v623, &v968);
                if ( v193 < 0 )
                  goto LABEL_1392;
                v622 = v968;
              }
              while ( (unsigned int)(v624 + 1) < 4 );
              v193 = RtlULongLongAdd(v968, 4uLL, &v968);
              if ( v193 < 0 )
              {
LABEL_1392:
                v625 = v1154;
                v626 = v1285;
                goto LABEL_1393;
              }
              v626 = (_DWORD *)v968;
              v1154 = v625;
              if ( !v625 )
                v626 = 0LL;
              v1285 = v626;
LABEL_1393:
              if ( v193 < 0 )
                goto LABEL_1508;
              if ( v625 != 4 )
                goto LABEL_1507;
              *(_DWORD *)v1162 = *v626;
            }
            else
            {
              v193 = -1073741811;
            }
          }
          else
          {
            v193 = -1073741811;
          }
          if ( v193 < 0 )
            goto LABEL_1508;
          if ( !v912[1] )
          {
            v193 = -1073741811;
            goto LABEL_1413;
          }
          if ( v610 <= 5 )
          {
            v193 = -1073741811;
            goto LABEL_1413;
          }
          v627 = v912[1];
          v970 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v627, 4uLL, &v970);
            if ( v193 < 0 )
              goto LABEL_1409;
            v193 = RtlULongLongAdd(v970, v628, &v970);
            if ( v193 < 0 )
              goto LABEL_1409;
            v627 = v970;
          }
          while ( (unsigned int)(v629 + 1) < 5 );
          v193 = RtlULongLongAdd(v970, 4uLL, &v970);
          if ( v193 < 0 )
          {
LABEL_1409:
            v630 = v1156;
            v631 = v1317;
            goto LABEL_1410;
          }
          v631 = (NTSTATUS *)v970;
          v1156 = v630;
          if ( !v630 )
            v631 = 0LL;
          v1317 = v631;
LABEL_1410:
          if ( v193 < 0 )
            goto LABEL_1508;
          if ( v630 == 4 )
          {
            v1160 = *v631;
LABEL_1413:
            if ( v193 < 0 )
              goto LABEL_1508;
            if ( !v912[1] )
            {
              v193 = -1073741811;
              goto LABEL_1508;
            }
            if ( v610 <= 6 )
            {
              v193 = -1073741811;
              goto LABEL_1508;
            }
            v632 = v912[1];
            v972 = v912[1];
            do
            {
              v193 = RtlULongLongAdd(v632, 4uLL, &v972);
              if ( v193 < 0 )
                goto LABEL_1426;
              v193 = RtlULongLongAdd(v972, v633, &v972);
              if ( v193 < 0 )
                goto LABEL_1426;
              v632 = v972;
            }
            while ( (unsigned int)(v634 + 1) < 6 );
            v193 = RtlULongLongAdd(v972, 4uLL, &v972);
            if ( v193 < 0 )
            {
LABEL_1426:
              v635 = v1158;
              v636 = v1287;
              goto LABEL_1427;
            }
            v636 = (_QWORD *)v972;
            v1158 = v635;
            if ( !v635 )
              v636 = 0LL;
            v1287 = v636;
LABEL_1427:
            if ( v193 >= 0 )
            {
              if ( v635 != 16 )
              {
                v193 = -1073741811;
                goto LABEL_416;
              }
              v637 = 0LL;
              v638 = *(_DWORD *)v1162;
              v1015 = v1160;
              TargetFile = 0LL;
              if ( !Handle )
              {
                v6 = (unsigned int *)v907;
                v193 = -1073741811;
                goto LABEL_1508;
              }
              if ( !v636 )
              {
                v6 = (unsigned int *)v907;
                v193 = -1073741811;
                goto LABEL_1508;
              }
              v639 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
              v640 = (struct _FILE_OBJECT *)Object;
              v904 = v639;
              if ( v639 < 0 )
              {
LABEL_1470:
                if ( TargetFile )
                  ZwClose(TargetFile);
                if ( v640 )
                  ObfDereferenceObject(v640);
                if ( v637 )
                  ExFreePoolWithTag(v637, 0x20534C53u);
                v193 = v904;
                if ( v904 < 0 )
                  goto LABEL_1506;
                v1024 = 0;
                if ( &v1024 )
                {
                  if ( *(_QWORD *)&Size[4] )
                  {
                    v654 = *(UINT **)&Size[4];
                    v1207 = *(_QWORD *)&Size[4];
                    if ( v905 )
                    {
                      while ( 1 )
                      {
                        v655 = RtlUIntAdd(4u, *v654, &v1166);
                        v193 = v655;
                        if ( v655 >= 0 )
                          v657 = v1166;
                        v1001 = v657;
                        if ( v655 < 0 )
                          break;
                        v193 = RtlULongLongAdd(v656, v657, &v1207);
                        if ( v193 < 0 )
                          break;
                        v654 = (UINT *)v1207;
                        if ( v658 + 1 >= v905 )
                          goto LABEL_1490;
                      }
                    }
                    else
                    {
LABEL_1490:
                      v193 = RtlULongLongAdd((ULONGLONG)v654, 4uLL, v1355);
                      if ( v193 >= 0 )
                      {
                        if ( (unsigned __int64)(v660 + 2) > *(_QWORD *)&Size[4]
                                                          + (unsigned __int64)*(unsigned int *)Size )
                        {
                          v193 = -1073741789;
                          goto LABEL_1506;
                        }
                        v661 = (_DWORD *)v1355[0];
                        *v660 = v659;
                        *v661 = v1024;
                        ++v905;
                      }
                    }
                  }
                  else
                  {
                    v652 = RtlUIntAdd(4u, 4u, &v1164);
                    v653 = v1001;
                    v193 = v652;
                    if ( v652 >= 0 )
                      v653 = v1164;
                    v1001 = v653;
                    if ( v652 >= 0 )
                    {
                      v193 = RtlUIntAdd(*(UINT *)Size, v653, (UINT *)Size);
                      if ( v193 >= 0 )
                      {
                        ++v905;
                        goto LABEL_1496;
                      }
                    }
                  }
                }
                else
                {
                  v193 = -1073741811;
                }
                if ( v193 >= 0 )
                {
LABEL_1496:
                  if ( *(_DWORD *)Size )
                  {
                    v662 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)Size, 0x20534C53u);
                    if ( v662 )
                    {
                      *(_QWORD *)&Size[4] = v662;
                      v905 = 0;
                      v1026 = 0;
                      if ( &v1026 )
                      {
                        v193 = RtlULongLongAdd((ULONGLONG)v662, 4uLL, v1341);
                        if ( v193 >= 0 )
                        {
                          if ( v664 + 2 <= (_DWORD *)((char *)v664 + *(unsigned int *)Size) )
                          {
                            v665 = (_DWORD *)v1341[0];
                            *v664 = v663;
                            *v665 = v1026;
                            ++v905;
                          }
                          else
                          {
                            v193 = -1073741789;
                          }
                        }
                      }
                      else
                      {
                        v193 = -1073741811;
                      }
                    }
                    else
                    {
                      v193 = -1073741801;
                    }
                  }
                  else
                  {
                    v193 = -1073741762;
                  }
                }
LABEL_1506:
                v6 = (unsigned int *)v907;
                goto LABEL_1508;
              }
              v641 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
              if ( v641 )
              {
                v904 = FsRtlKernelFsControlFile(v640, v641, 0x248u, (__int64)&v1009);
                if ( v904 >= 0 )
                {
                  if ( v1009 >= 0x40 )
                  {
                    pcbLength[0] = *v641;
                    v904 = FsRtlKernelFsControlFile(v640, v641, 0x248u, (__int64)&v1009);
                    if ( v904 >= 0 )
                    {
                      if ( v1009 >= 0x40 )
                      {
                        pcbLength[1] = v641[3];
                        v1370 = *(_OWORD *)pcbLength;
                      }
                      else
                      {
                        v904 = -1073741762;
                      }
                    }
                  }
                  else
                  {
                    v904 = -1073741762;
                  }
                }
                ExFreePoolWithTag(v641, 0x20534C53u);
                if ( v904 < 0 )
                  goto LABEL_1469;
                if ( (_QWORD)v1370 != *v636 )
                {
                  v904 = -1073741762;
LABEL_1469:
                  v9 = (unsigned int *)v908;
                  goto LABEL_1470;
                }
                if ( *((_QWORD *)&v1370 + 1) != v636[1] )
                {
                  v904 = -1073741762;
                  goto LABEL_1469;
                }
                if ( v638 )
                {
                  *(_QWORD *)&v1370 = -1LL;
                  *((_QWORD *)&v1370 + 1) = 0x7FFFFFFFFFFFFFFFLL;
                }
                else
                {
                  if ( ObOpenObjectByPointer(v640, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
                  {
                    v642 = 0;
                    if ( (unsigned int)(v1015 - 2) <= 1 )
                      v642 = 6;
                    ZwSetCachedSigningLevel(2u, v642, &TargetFile, 1u, TargetFile);
                  }
                  v643 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
                  if ( !v643 )
                    goto LABEL_1468;
                  v904 = FsRtlKernelFsControlFile(v640, v643, 0x248u, (__int64)&v983);
                  v644 = v904;
                  if ( v904 >= 0 )
                  {
                    if ( (unsigned int)v983 >= 0x40 )
                    {
                      pcbLength[0] = *v643;
                      v904 = FsRtlKernelFsControlFile(v640, v643, 0x248u, (__int64)&v983);
                      v644 = v904;
                      if ( v904 >= 0 )
                      {
                        if ( (unsigned int)v983 >= 0x40 )
                        {
                          pcbLength[1] = v643[3];
                          v1370 = *(_OWORD *)pcbLength;
                        }
                        else
                        {
                          v644 = -1073741762;
                          v904 = -1073741762;
                        }
                      }
                    }
                    else
                    {
                      v644 = -1073741762;
                      v904 = -1073741762;
                    }
                  }
                  ExFreePoolWithTag(v643, 0x20534C53u);
                  if ( v644 < 0 )
                    goto LABEL_1469;
                }
                v645 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
                v646 = v645;
                if ( v645 )
                {
                  memset(v645, 0, 0x3AuLL);
                  v646[4] = 0;
                  v647 = (unsigned __int8 *)&v1370;
                  *((_WORD *)v646 + 3) = 24;
                  v646[5] = 25;
                  v648 = 0;
                  v649 = 16LL;
                  qmemcpy(v646 + 8, "$Kernel.Purge.AppxFICache", 25);
                  v1070 = 0LL;
                  v650 = 0;
                  v1252 = 0LL;
                  do
                  {
                    v651 = *v647++;
                    v651 -= 23737705;
                    v650 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v650 + v651), 21), 21), 21);
                    v648 += v650 + v651;
                    v1070 = __PAIR64__(v650, v648);
                    --v649;
                  }
                  while ( v649 );
                  v1252 = v1070;
                  *(_OWORD *)(v646 + 34) = v1370;
                  *(_QWORD *)(v646 + 50) = v1252;
                  v637 = v646;
                  v9 = (unsigned int *)v908;
                  v904 = FsRtlSetKernelEaFile(v640);
                  goto LABEL_1470;
                }
              }
LABEL_1468:
              v904 = -1073741801;
              goto LABEL_1469;
            }
LABEL_1508:
            if ( v193 < 0 )
              goto LABEL_416;
            goto LABEL_326;
          }
LABEL_1507:
          v193 = -1073741789;
          goto LABEL_1508;
        }
LABEL_1329:
        v613 = (const void **)v907;
      }
LABEL_1330:
      if ( v612 )
      {
        if ( v614 != 160 )
          goto LABEL_1350;
        if ( memcmp(qword_1406A4C50, v613[3], 0xA0uLL) || *((_DWORD *)v615 + 4) != 160 )
          goto LABEL_1340;
        v65 = memcmp(qword_1406A4890, *((const void **)v615 + 3), 0xA0uLL) == 0;
        v613 = (const void **)v907;
        if ( v65 && *((_DWORD *)v907 + 8) == 8 )
        {
          if ( **((_QWORD **)v907 + 5) == 0xF10D668DB2BB8BB9uLL
            && *((_DWORD *)v615 + 8) == 8
            && **((_QWORD **)v615 + 5) == 0x768DFD321621EA95LL )
          {
            v9 = (unsigned int *)v908;
            v6 = (unsigned int *)v907;
            goto LABEL_1362;
          }
LABEL_1340:
          v613 = (const void **)v907;
        }
      }
      if ( v614 == 160
        && !memcmp(qword_1406A4E30, v613[3], 0xA0uLL)
        && *((_DWORD *)v615 + 4) == 160
        && !memcmp(sub_1406A4930, *((const void **)v615 + 3), 0xA0uLL)
        && *((_DWORD *)v907 + 8) == 8
        && **((_QWORD **)v907 + 5) == 0xA10B922F1A2F2A8AuLL
        && *((_DWORD *)v615 + 8) == 8
        && **((_QWORD **)v615 + 5) == 0xC349B50B0A716A96uLL )
      {
        v9 = (unsigned int *)v908;
        goto LABEL_1321;
      }
LABEL_1350:
      v6 = (unsigned int *)v907;
      if ( v612 && v614 == 160 )
      {
        v9 = (unsigned int *)v908;
        if ( !memcmp(qword_1406A4BB0, *((const void **)v907 + 3), 0xA0uLL)
          && *((_DWORD *)v908 + 4) == 160
          && !memcmp(qword_1406A46B0, *((const void **)v908 + 3), 0xA0uLL)
          && *((_DWORD *)v907 + 8) == 8
          && **((_QWORD **)v907 + 5) == 0xA6723CF736811074uLL
          && *((_DWORD *)v908 + 8) == 8
          && **((_QWORD **)v908 + 5) == 0x7511056E178DA076LL )
        {
LABEL_1362:
          if ( v193 < 0 )
            goto LABEL_1296;
          goto LABEL_1322;
        }
      }
      else
      {
        v9 = (unsigned int *)v908;
      }
      v193 = -2147024891;
      goto LABEL_1362;
    case 24:
      v705 = v912[0];
      if ( !v912[1] )
      {
        v193 = -1073741811;
        goto LABEL_1643;
      }
      if ( LODWORD(v912[0]) <= 3 )
      {
        v193 = -1073741811;
        goto LABEL_1643;
      }
      v706 = v912[1];
      v980 = v912[1];
      do
      {
        v193 = RtlULongLongAdd(v706, 4uLL, &v980);
        if ( v193 < 0 )
          goto LABEL_1638;
        v193 = RtlULongLongAdd(v980, v707, &v980);
        if ( v193 < 0 )
          goto LABEL_1638;
        v706 = v980;
      }
      while ( (unsigned int)(v708 + 1) < 3 );
      v193 = RtlULongLongAdd(v980, 4uLL, &v980);
      if ( v193 < 0 )
      {
LABEL_1638:
        v709 = v1115;
        v710 = v1295;
        goto LABEL_1639;
      }
      v710 = (_QWORD *)v980;
      v1115 = v709;
      if ( !v709 )
        v710 = 0LL;
      v1295 = v710;
LABEL_1639:
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v709 != 8 )
      {
        v193 = -1073741789;
        goto LABEL_1743;
      }
      v1276 = *v710;
LABEL_1643:
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v912[1] )
      {
        if ( v705 > 4 )
        {
          v711 = v912[1];
          v982 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v711, 4uLL, &v982);
            if ( v193 < 0 )
              goto LABEL_1656;
            v193 = RtlULongLongAdd(v982, v712, &v982);
            if ( v193 < 0 )
              goto LABEL_1656;
            v711 = v982;
          }
          while ( (unsigned int)(v713 + 1) < 4 );
          v193 = RtlULongLongAdd(v982, 4uLL, &v982);
          if ( v193 < 0 )
          {
LABEL_1656:
            v714 = v1117;
            v715 = v1307;
            goto LABEL_1657;
          }
          v715 = (void **)v982;
          v1117 = v714;
          if ( !v714 )
            v715 = 0LL;
          v1307 = v715;
LABEL_1657:
          if ( v193 < 0 )
            goto LABEL_777;
          if ( v714 != 8 )
          {
            v193 = -1073741762;
            goto LABEL_1743;
          }
          v1275 = *v715;
          v1264 = v1275;
        }
        else
        {
          v193 = -1073741811;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v716 = 0LL;
      v717 = 0LL;
      if ( !v1264 )
      {
        v193 = -1073741811;
        goto LABEL_1743;
      }
      v718 = ObReferenceObjectByHandle(v1264, 0, (POBJECT_TYPE)IoFileObjectType, 1, &v934, 0LL);
      v719 = (struct _FILE_OBJECT *)v934;
      v193 = v718;
      if ( v718 < 0 )
        goto LABEL_1698;
      v720 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
      v716 = v720;
      if ( !v720 )
      {
        v193 = -1073741801;
        goto LABEL_1698;
      }
      *(_QWORD *)v720 = 0LL;
      *((_QWORD *)v720 + 1) = 0LL;
      *((_QWORD *)v720 + 2) = 0LL;
      *((_DWORD *)v720 + 6) = 0;
      v720[29] = 0;
      v720[4] = 25;
      *(_DWORD *)v720 = 0;
      strcpy(v720 + 5, "$Kernel.Purge.AppxFICac");
      strcpy(v720 + 29, "e");
      v721 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
      v717 = (unsigned __int8 *)v721;
      if ( !v721 )
      {
        v193 = -1073741801;
        goto LABEL_1698;
      }
      memset(v721, 0, 0x3AuLL);
      KernelEaFile = FsRtlQueryKernelEaFile(v719, (__int64)v716, 31, 0LL, 1, (__int64)&v1119);
      v193 = KernelEaFile;
      if ( KernelEaFile == -1073741275 )
      {
        v987 = 0;
        v193 = 0;
        goto LABEL_1698;
      }
      if ( KernelEaFile < 0 )
        goto LABEL_1698;
      v723 = *((unsigned __int16 *)v717 + 3);
      v724 = &v717[v717[5] + 9];
      if ( &v724[v723] <= &v717[v1119] )
      {
        if ( !(_WORD)v723 )
        {
          LODWORD(v97) = 0;
          v987 = 0;
          v193 = 0;
          goto LABEL_1698;
        }
        if ( (_DWORD)v723 == 24 )
        {
          Source2 = 0LL;
          if ( v724 )
          {
            v1072 = 0LL;
            v725 = v724;
            v726 = 0;
            v727 = 16LL;
            v728 = 0;
            do
            {
              v729 = *v725++;
              v729 -= 23737705;
              v726 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v726 + v729), 21), 21), 21);
              v728 += v726 + v729;
              v1072 = __PAIR64__(v726, v728);
              --v727;
            }
            while ( v727 );
            Source2 = v1072;
            if ( RtlCompareMemory(v724 + 16, &Source2, 8uLL) == 8 )
            {
              v730 = 2;
              v731 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
              if ( v731 )
              {
                v732 = FsRtlKernelFsControlFile(v719, v731, 0x248u, (__int64)&v1017);
                if ( v732 >= 0 )
                {
                  if ( v1017 >= 0x40 )
                  {
                    pcbLength[0] = *v731;
                    v732 = FsRtlKernelFsControlFile((PFILE_OBJECT)v934, v731, 0x248u, (__int64)&v1017);
                    if ( v732 >= 0 )
                    {
                      if ( v1017 >= 0x40 )
                        pcbLength[1] = v731[3];
                      else
                        v732 = -1073741762;
                    }
                  }
                  else
                  {
                    v732 = -1073741762;
                  }
                }
                ExFreePoolWithTag(v731, 0x20534C53u);
                v194 = v732 < 0;
                v719 = (struct _FILE_OBJECT *)v934;
                if ( !v194 && pcbLength[0] == *(_QWORD *)v724 && pcbLength[1] == *((_QWORD *)v724 + 1) )
                  v730 = 3;
              }
              v193 = 0;
              v987 = v730;
            }
            else
            {
              v193 = -1073741762;
            }
          }
          else
          {
            v193 = -1073741811;
          }
        }
        else
        {
          v193 = -1073741762;
        }
      }
      else
      {
        v193 = -1073741762;
      }
      LODWORD(v97) = 0;
LABEL_1698:
      if ( v719 )
        ObfDereferenceObject(v719);
      if ( v716 )
        ExFreePoolWithTag(v716, 0x20534C53u);
      if ( v717 )
        ExFreePoolWithTag(v717, 0x20534C53u);
      if ( v193 < 0 )
        goto LABEL_1742;
      v955[0] = (unsigned int)v97;
      v733 = RtlUIntAdd(4u, 8u, &v1242);
      v734 = v1030;
      v193 = v733;
      if ( v733 >= 0 )
        v734 = v1242;
      v1030 = v734;
      if ( v733 < 0 )
        goto LABEL_1742;
      v193 = RtlUIntAdd(0, v734, v955);
      if ( v193 < 0 )
        goto LABEL_1742;
      v735 = RtlUIntAdd(4u, 4u, &v1244);
      v193 = v735;
      if ( v735 >= 0 )
        v736 = v1244;
      v1030 = v736;
      if ( v735 < 0 )
        goto LABEL_1742;
      v193 = RtlUIntAdd(v955[0], v736, v955);
      if ( v193 < 0 )
        goto LABEL_1742;
      *(_DWORD *)Size = v955[0];
      if ( !v955[0] )
      {
        v193 = -1073741762;
        goto LABEL_1742;
      }
      v737 = ExAllocatePoolWithTag(PagedPool, v955[0], 0x20534C53u);
      if ( !v737 )
      {
        v193 = -1073741801;
        goto LABEL_1742;
      }
      *(_QWORD *)&Size[4] = v737;
      v738 = (unsigned int)v97;
      v905 = (unsigned int)v97;
      v1262 = v1276;
      if ( &v1262 )
      {
        v193 = RtlULongLongAdd((ULONGLONG)v737, 4uLL, v1322);
        if ( v193 >= 0 )
        {
          if ( v739 + 3 > (_DWORD *)((char *)v739 + *(unsigned int *)Size) )
          {
            v193 = -1073741789;
            goto LABEL_1742;
          }
          v740 = (_QWORD *)v1322[0];
          *v739 = 8;
          *v740 = v1262;
          v738 = ++v905;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 >= 0 )
      {
        v1032 = v987;
        if ( &v1032 )
        {
          if ( *(_QWORD *)&Size[4] )
          {
            v743 = *(UINT **)&Size[4];
            v744 = (int)v97;
            v1211 = *(_QWORD *)&Size[4];
            if ( v738 )
            {
              while ( 1 )
              {
                v745 = RtlUIntAdd(4u, *v743, &v1217);
                v193 = v745;
                if ( v745 >= 0 )
                  v747 = v1217;
                v1006 = v747;
                if ( v745 < 0 )
                  break;
                v193 = RtlULongLongAdd(v746, v747, &v1211);
                if ( v193 < 0 )
                  break;
                v743 = (UINT *)v1211;
                if ( ++v744 >= v748 )
                  goto LABEL_1737;
              }
            }
            else
            {
LABEL_1737:
              v193 = RtlULongLongAdd((ULONGLONG)v743, 4uLL, v1320);
              if ( v193 >= 0 )
              {
                if ( (unsigned __int64)(v750 + 2) <= *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                {
                  v751 = (int *)v1320[0];
                  *v750 = v749;
                  *v751 = v1032;
                  ++v905;
                }
                else
                {
                  v193 = -1073741789;
                }
              }
            }
          }
          else
          {
            v741 = RtlUIntAdd(4u, 4u, &v1183);
            v742 = v1006;
            v193 = v741;
            if ( v741 >= 0 )
              v742 = v1183;
            v1006 = v742;
            if ( v741 >= 0 )
            {
              v193 = RtlUIntAdd(*(UINT *)Size, v742, (UINT *)Size);
              if ( v193 >= 0 )
              {
                ++v905;
                v193 = (int)v97;
              }
            }
          }
        }
        else
        {
          v193 = -1073741811;
        }
      }
LABEL_1742:
      v9 = (unsigned int *)v908;
LABEL_1743:
      if ( v193 >= 0 )
        goto LABEL_325;
      goto LABEL_777;
    case 30:
      v1101 = 0LL;
      if ( !v912[1] )
      {
        v193 = -1073741811;
        goto LABEL_1828;
      }
      if ( LODWORD(v912[0]) <= 3 )
      {
        v193 = -1073741811;
        goto LABEL_1828;
      }
      v775 = v912[1];
      v984 = v912[1];
      do
      {
        v193 = RtlULongLongAdd(v775, 4uLL, &v984);
        if ( v193 < 0 )
          goto LABEL_1815;
        v193 = RtlULongLongAdd(v984, v776, &v984);
        if ( v193 < 0 )
          goto LABEL_1815;
        v775 = v984;
      }
      while ( (unsigned int)(v777 + 1) < 3 );
      v193 = RtlULongLongAdd(v984, 4uLL, &v984);
      if ( v193 < 0 )
      {
LABEL_1815:
        v778 = v1046;
        v779 = psz;
        goto LABEL_1816;
      }
      v779 = (const wchar_t *)v984;
      v1046 = v778;
      if ( !v778 )
        v779 = 0LL;
      psz = v779;
LABEL_1816:
      if ( v193 < 0 )
        goto LABEL_1866;
      if ( !v778 )
      {
        v193 = -1073741762;
        goto LABEL_1834;
      }
      if ( (v778 & 1) != 0 )
      {
        v193 = -1073741762;
        goto LABEL_1834;
      }
      if ( v779[((unsigned __int64)v778 >> 1) - 1] )
      {
        v193 = -1073741762;
        goto LABEL_1834;
      }
      if ( StringCbLengthW(v779, v778, &v1238) < 0 )
      {
        v193 = -1073741762;
        goto LABEL_1834;
      }
      if ( v1238 + 2 != v1046 )
      {
        v193 = -1073741762;
        goto LABEL_1834;
      }
      v1280 = (void *)psz;
      v1048 = v1238 >> 1;
LABEL_1828:
      if ( v193 < 0 )
        goto LABEL_1866;
      v780 = 2 * v1048 + 2;
      if ( 2 * v1048 == -2 )
      {
        v193 = -1073741762;
      }
      else
      {
        v781 = v780;
        v782 = ExAllocatePoolWithTag(PagedPool, v780, 0x20534C53u);
        v783 = v782;
        if ( v782 )
        {
          v193 = 0;
          memmove(v782, v1280, v781);
          v1118 = v1048;
          v1101 = v783;
        }
        else
        {
          v193 = -1073741801;
        }
      }
LABEL_1834:
      if ( v193 < 0 )
        goto LABEL_1866;
      if ( v912[1] )
      {
        if ( LODWORD(v912[0]) > 4 )
        {
          v784 = v912[1];
          v986 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v784, 4uLL, &v986);
            if ( v193 < 0 )
              goto LABEL_1847;
            v193 = RtlULongLongAdd(v986, v785, &v986);
            if ( v193 < 0 )
              goto LABEL_1847;
            v784 = v986;
          }
          while ( (unsigned int)(v786 + 1) < 4 );
          v193 = RtlULongLongAdd(v986, 4uLL, &v986);
          if ( v193 < 0 )
          {
LABEL_1847:
            v787 = v1226;
            v788 = v1282;
            goto LABEL_1848;
          }
          v788 = (int *)v986;
          v1226 = v787;
          if ( !v787 )
            v788 = 0LL;
          v1282 = v788;
LABEL_1848:
          if ( v193 < 0 )
            goto LABEL_1866;
          if ( v787 != 4 )
          {
            v193 = -1073741789;
            goto LABEL_1866;
          }
          v1007 = *v788;
        }
        else
        {
          v193 = -1073741811;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 >= 0 )
      {
        v1050 = 0;
        v789 = RtlUIntAdd(4u, 4u, &v1116);
        v790 = v973;
        v193 = v789;
        if ( v789 >= 0 )
          v790 = v1116;
        v973 = v790;
        if ( v789 < 0 )
        {
          v791 = v973;
        }
        else
        {
          v791 = v973;
          v193 = RtlUIntAdd(0, v790, &v1050);
          if ( v193 >= 0 )
            v791 = v1050;
        }
        if ( v193 >= 0 )
        {
          if ( qword_1406FB0B8 )
          {
            ExFreePoolWithTag(qword_1406FB0B8, 0x20534C53u);
            qword_1406FB0B8 = 0LL;
          }
          v792 = 2LL * v1118;
          stru_1406FB238.Length = 0;
          stru_1406FB238.Buffer = 0LL;
          if ( v792 > 0xFFFFFFFF )
          {
            v193 = -1073741675;
LABEL_1865:
            v9 = (unsigned int *)v908;
            goto LABEL_1866;
          }
          v193 = RtlUIntAdd(v792, 2u, &v1230);
          if ( v193 < 0 )
            goto LABEL_1865;
          if ( !v1230 )
          {
            v193 = -1073741762;
            goto LABEL_1865;
          }
          v793 = v1230;
          v794 = ExAllocatePoolWithTag(PagedPool, v1230, 0x20534C53u);
          if ( !v794 )
          {
            v193 = -1073741801;
            goto LABEL_1865;
          }
          qword_1406FB0B8 = v794;
          memset(v794, 0, v793);
          memmove(qword_1406FB0B8, v1101, (unsigned int)v792);
          RtlInitUnicodeString(&stru_1406FB238, (PCWSTR)qword_1406FB0B8);
          dword_1406FB114 = v1007;
          v1052 = 8;
          v193 = RtlUIntAdd(8u, v791, &v1052);
          if ( v193 < 0 )
            goto LABEL_1888;
          v795 = (v1052 + 7) & 0xFFFFFFF8;
          if ( v795 >= v1052 )
          {
            v1054 = (v1052 + 7) & 0xFFFFFFF8;
            v797 = RtlUIntAdd(v795, 8u, &v1054);
            v796 = v1007;
            v193 = v797;
            if ( v797 >= 0 )
              v796 = v1054;
          }
          else
          {
            v796 = v1007;
            v193 = -1073741675;
          }
          if ( v193 < 0 || (v924 = 4, v193 = RtlUIntAdd(4u, v796, &v924), v193 < 0) )
          {
LABEL_1888:
            v9 = (unsigned int *)v908;
          }
          else
          {
            v9 = (unsigned int *)v908;
            v193 = RtlUIntAdd(v924, v798, &v924);
            if ( v193 >= 0 )
            {
              v193 = RtlUIntAdd(v924, *((_DWORD *)v908 + 4), &v924);
              if ( v193 >= 0 )
              {
                v193 = RtlUIntAdd(v924, 4u, &v924);
                if ( v193 >= 0 )
                {
                  v193 = RtlUIntAdd(v924, *((_DWORD *)v908 + 8), &v924);
                  v799 = v1232;
                  if ( v193 >= 0 )
                    v799 = v924;
                  v1232 = v799;
                }
              }
            }
          }
          if ( v193 >= 0 )
          {
            *(_DWORD *)Size = v791;
            if ( v791 )
            {
              v800 = ExAllocatePoolWithTag(PagedPool, v791, 0x20534C53u);
              if ( v800 )
              {
                *(_QWORD *)&Size[4] = v800;
                v905 = 0;
                v1056 = 0;
                if ( &v1056 )
                {
                  v193 = RtlULongLongAdd((ULONGLONG)v800, 4uLL, v1334);
                  if ( v193 >= 0 )
                  {
                    if ( v802 + 2 <= (_DWORD *)((char *)v802 + *(unsigned int *)Size) )
                    {
                      v803 = (_DWORD *)v1334[0];
                      *v802 = v801;
                      *v803 = v1056;
                      ++v905;
                    }
                    else
                    {
                      v193 = -1073741789;
                    }
                  }
                }
                else
                {
                  v193 = -1073741811;
                }
              }
              else
              {
                v193 = -1073741801;
              }
            }
            else
            {
              v193 = -1073741762;
            }
          }
        }
      }
LABEL_1866:
      if ( v1101 )
      {
        ExFreePoolWithTag(v1101, 0x20534C53u);
        v1101 = 0LL;
      }
      v6 = (unsigned int *)v907;
      if ( v193 < 0 )
        goto LABEL_416;
      goto LABEL_326;
    case 31:
      stru_1406FB238.Length = 0;
      stru_1406FB238.Buffer = 0LL;
      if ( qword_1406FB0B8 )
      {
        ExFreePoolWithTag(qword_1406FB0B8, 0x20534C53u);
        qword_1406FB0B8 = 0LL;
      }
      dword_1402D54BC = 0;
      dword_1406FB114 = 0;
      dword_1406FB0B4 = 0;
      v953 = 0;
      v824 = RtlUIntAdd(4u, 4u, &v1216);
      v825 = v945;
      v193 = v824;
      if ( v824 >= 0 )
        v825 = v1216;
      v945 = v825;
      if ( v824 < 0 )
      {
        v827 = v945;
      }
      else
      {
        v826 = RtlUIntAdd(0, v825, &v953);
        v827 = v945;
        v193 = v826;
        if ( v826 >= 0 )
          v827 = v953;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v1074 = 8;
      v193 = RtlUIntAdd(8u, v827, &v1074);
      if ( v193 < 0 )
        goto LABEL_1979;
      v829 = (v1074 + 7) & 0xFFFFFFF8;
      if ( v829 >= v1074 )
      {
        v1083 = (v1074 + 7) & 0xFFFFFFF8;
        v831 = RtlUIntAdd(v829, 8u, &v1083);
        v830 = v945;
        v193 = v831;
        if ( v831 >= 0 )
          v830 = v1083;
      }
      else
      {
        v830 = v945;
        v193 = -1073741675;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      v928 = 4;
      v193 = RtlUIntAdd(4u, v830, &v928);
      if ( v193 >= 0 )
      {
        v193 = RtlUIntAdd(v928, v832, &v928);
        if ( v193 >= 0 )
        {
          v193 = RtlUIntAdd(v928, v9[4], &v928);
          if ( v193 >= 0 )
          {
            v193 = RtlUIntAdd(v928, 4u, &v928);
            if ( v193 >= 0 )
            {
              v193 = RtlUIntAdd(v928, v9[8], &v928);
              v833 = v1185;
              if ( v193 >= 0 )
                v833 = v928;
              v1185 = v833;
            }
          }
        }
      }
LABEL_1979:
      if ( v193 < 0 )
        goto LABEL_777;
      *(_DWORD *)Size = v828;
      if ( v828 )
      {
        v834 = ExAllocatePoolWithTag(PagedPool, v828, 0x20534C53u);
        if ( v834 )
        {
          *(_QWORD *)&Size[4] = v834;
          v905 = 0;
          v1091 = 0;
          if ( &v1091 )
          {
            v193 = RtlULongLongAdd((ULONGLONG)v834, 4uLL, v1338);
            if ( v193 >= 0 )
            {
              if ( v836 + 2 <= (_DWORD *)((char *)v836 + *(unsigned int *)Size) )
              {
                v837 = (_DWORD *)v1338[0];
                *v836 = v835;
                *v837 = v1091;
                ++v905;
              }
              else
              {
                v193 = -1073741789;
              }
            }
          }
          else
          {
            v193 = -1073741811;
          }
        }
        else
        {
          v193 = -1073741801;
        }
      }
      else
      {
        v193 = -1073741762;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      goto LABEL_325;
    case 37:
      if ( !v912[1] )
      {
        v193 = -1073741811;
        goto LABEL_1917;
      }
      if ( LODWORD(v912[0]) <= 3 )
      {
        v193 = -1073741811;
        goto LABEL_1917;
      }
      v804 = v912[1];
      v988 = v912[1];
      do
      {
        v193 = RtlULongLongAdd(v804, 4uLL, &v988);
        if ( v193 < 0 )
          goto LABEL_1912;
        v193 = RtlULongLongAdd(v988, v805, &v988);
        if ( v193 < 0 )
          goto LABEL_1912;
        v804 = v988;
      }
      while ( (unsigned int)(v806 + 1) < 3 );
      v193 = RtlULongLongAdd(v988, 4uLL, &v988);
      if ( v193 < 0 )
      {
LABEL_1912:
        v807 = v1122;
        v808 = v1284;
        goto LABEL_1913;
      }
      v808 = (int *)v988;
      v1122 = v807;
      if ( !v807 )
        v808 = 0LL;
      v1284 = v808;
LABEL_1913:
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v807 != 4 )
      {
        v193 = -1073741789;
        goto LABEL_1205;
      }
      v1125 = *v808;
LABEL_1917:
      if ( v193 >= 0 )
      {
        v1058 = 0;
        v809 = RtlUIntAdd(4u, 4u, &v1234);
        v810 = v938;
        v193 = v809;
        if ( v809 >= 0 )
          v810 = v1234;
        v938 = v810;
        if ( v809 < 0 )
        {
          v812 = v938;
        }
        else
        {
          v811 = RtlUIntAdd(0, v810, &v1058);
          v812 = v938;
          v193 = v811;
          if ( v811 >= 0 )
            v812 = v1058;
        }
        if ( v193 >= 0 )
        {
          v1060 = 8;
          v193 = RtlUIntAdd(8u, v812, &v1060);
          if ( v193 < 0 )
            goto LABEL_1943;
          v814 = (v1060 + 7) & 0xFFFFFFF8;
          if ( v814 >= v1060 )
          {
            v1062 = (v1060 + 7) & 0xFFFFFFF8;
            v816 = RtlUIntAdd(v814, 8u, &v1062);
            v815 = v938;
            v193 = v816;
            if ( v816 >= 0 )
              v815 = v1062;
          }
          else
          {
            v815 = v938;
            v193 = -1073741675;
          }
          if ( v193 < 0 )
          {
LABEL_1943:
            v819 = v938;
          }
          else
          {
            v926 = 4;
            v193 = RtlUIntAdd(4u, v815, &v926);
            if ( v193 < 0
              || (v193 = RtlUIntAdd(v926, v817, &v926), v193 < 0)
              || (v193 = RtlUIntAdd(v926, v9[4], &v926), v193 < 0)
              || (v193 = RtlUIntAdd(v926, 4u, &v926), v193 < 0) )
            {
              v818 = v1064;
            }
            else
            {
              v193 = RtlUIntAdd(v926, v9[8], &v926);
              v818 = v1064;
              if ( v193 >= 0 )
                v818 = v926;
              v1064 = v818;
            }
            v819 = v938;
            if ( v193 >= 0 )
              v819 = v818;
          }
          if ( v193 >= 0 )
          {
            if ( v935 >= v819 )
              dword_1406FB0B4 = v1125;
            *(_DWORD *)Size = v813;
            if ( v813 )
            {
              v820 = ExAllocatePoolWithTag(PagedPool, v813, 0x20534C53u);
              if ( v820 )
              {
                *(_QWORD *)&Size[4] = v820;
                v905 = 0;
                v1066 = 0;
                if ( &v1066 )
                {
                  v193 = RtlULongLongAdd((ULONGLONG)v820, 4uLL, v1336);
                  if ( v193 >= 0 )
                  {
                    if ( v822 + 2 <= (_DWORD *)((char *)v822 + *(unsigned int *)Size) )
                    {
                      v823 = (_DWORD *)v1336[0];
                      *v822 = v821;
                      *v823 = v1066;
                      ++v905;
                    }
                    else
                    {
                      v193 = -1073741789;
                    }
                  }
                }
                else
                {
LABEL_1607:
                  v193 = -1073741811;
                }
              }
              else
              {
                v193 = -1073741801;
              }
            }
            else
            {
              v193 = -1073741762;
            }
LABEL_1205:
            if ( v193 >= 0 )
              goto LABEL_325;
          }
        }
      }
      goto LABEL_777;
    case 100:
      v838 = sub_14067C2C0(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v838;
      if ( v838 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 101:
      v848 = sub_14067C058(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v848;
      if ( v848 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 102:
      v849 = sub_14067B494(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v849;
      if ( v849 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 103:
      v851 = sub_14067A244(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v851;
      if ( v851 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 104:
      v852 = sub_14067B814(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v852;
      if ( v852 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 105:
      v853 = sub_140219284((__int64)v912, (__int64)v9, v106, (__int64)&v905);
      v6 = (unsigned int *)v907;
      v193 = v853;
      if ( v853 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 106:
      v839 = sub_14067AC78(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v839;
      if ( v839 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 107:
      v840 = sub_140218764((__int64)v912, (__int64)v9, v106, (__int64)&v905);
      v6 = (unsigned int *)v907;
      v193 = v840;
      if ( v840 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 109:
      v1099 = 0LL;
      v1259 = 0LL;
      v1371 = 0uLL;
      if ( !v9 )
      {
        v6 = (unsigned int *)v907;
        v193 = -1073741811;
        v7 = (UINT *)v909;
        v8 = 0LL;
        v5 = 0LL;
        goto LABEL_387;
      }
      if ( v912[1] )
      {
        if ( LODWORD(v912[0]) <= 3 )
        {
          v193 = -1073741811;
        }
        else
        {
          v273 = v912[1];
          v990 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v273, 4uLL, &v990);
            if ( v193 < 0 )
              goto LABEL_2021;
            v193 = RtlULongLongAdd(v990, v274, &v990);
            if ( v193 < 0 )
              goto LABEL_2021;
            v273 = v990;
          }
          while ( (unsigned int)(v275 + 1) < 3 );
          v193 = RtlULongLongAdd(v990, 4uLL, &v990);
          if ( v193 < 0 )
          {
LABEL_2021:
            v276 = v1237;
            v277 = v1286;
          }
          else
          {
            v1237 = v276;
            if ( v276 )
              v277 = (_QWORD *)v990;
            else
              v277 = 0LL;
            v1286 = v277;
          }
          if ( v193 < 0 )
            goto LABEL_777;
          if ( v276 != 8 )
          {
            v193 = -1073741789;
            goto LABEL_554;
          }
          v1269 = *v277;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v912[1] )
      {
        if ( LODWORD(v912[0]) > 4 )
        {
          v278 = v912[1];
          v992 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v278, 4uLL, &v992);
            if ( v193 < 0 )
              goto LABEL_2026;
            v193 = RtlULongLongAdd(v992, v279, &v992);
            if ( v193 < 0 )
              goto LABEL_2026;
            v278 = v992;
          }
          while ( (unsigned int)(v280 + 1) < 4 );
          v193 = RtlULongLongAdd(v992, 4uLL, &v992);
          if ( v193 < 0 )
          {
LABEL_2026:
            v281 = v1131;
            v282 = v1288;
          }
          else
          {
            v1131 = v281;
            if ( v281 )
              v282 = (_DWORD *)v992;
            else
              v282 = 0LL;
            v1288 = v282;
          }
          if ( v193 < 0 )
            goto LABEL_777;
          if ( v281 == 4 )
          {
            v1135 = *v282;
            goto LABEL_454;
          }
          v193 = -1073741789;
LABEL_554:
          v194 = v193 < 0;
          goto LABEL_324;
        }
        v193 = -1073741811;
      }
      else
      {
        v193 = -1073741811;
      }
LABEL_454:
      if ( v193 < 0 )
        goto LABEL_777;
      if ( v912[1] )
      {
        if ( LODWORD(v912[0]) <= 5 )
        {
          v193 = -1073741811;
        }
        else
        {
          v283 = v912[1];
          v994 = v912[1];
          do
          {
            v193 = RtlULongLongAdd(v283, 4uLL, &v994);
            if ( v193 < 0 )
              goto LABEL_2031;
            v193 = RtlULongLongAdd(v994, v284, &v994);
            if ( v193 < 0 )
              goto LABEL_2031;
            v283 = v994;
          }
          while ( (unsigned int)(v285 + 1) < 5 );
          v193 = RtlULongLongAdd(v994, 4uLL, &v994);
          if ( v193 < 0 )
          {
LABEL_2031:
            v286 = v1093;
            v287 = v1257;
          }
          else
          {
            v1093 = v286;
            if ( v286 )
              v287 = (const wchar_t *)v994;
            else
              v287 = 0LL;
            v1257 = (wchar_t *)v287;
          }
          if ( v193 < 0 )
            goto LABEL_552;
          if ( !v286 )
          {
            v193 = -1073741762;
            goto LABEL_476;
          }
          if ( (v286 & 1) != 0 )
          {
            v193 = -1073741762;
            goto LABEL_476;
          }
          if ( v287[((unsigned __int64)v286 >> 1) - 1] )
          {
            v193 = -1073741762;
            goto LABEL_476;
          }
          if ( StringCbLengthW(v287, v286, &v1240) < 0 )
          {
            v193 = -1073741762;
            goto LABEL_476;
          }
          if ( v1240 + 2 != v1093 )
          {
            v193 = -1073741762;
            goto LABEL_476;
          }
          v1292 = v1257;
          v1095 = v1240 >> 1;
        }
      }
      else
      {
        v193 = -1073741811;
      }
      if ( v193 < 0 )
        goto LABEL_552;
      if ( 2 * v1095 == -2 )
      {
        v193 = -1073741762;
      }
      else
      {
        v288 = 2 * v1095 + 2;
        v289 = ExAllocatePoolWithTag(PagedPool, v288, 0x20534C53u);
        v290 = v289;
        if ( v289 )
        {
          v193 = 0;
          memmove(v289, v1292, v288);
          v1271[2] = v1095;
          v1099 = v290;
        }
        else
        {
          v193 = -1073741801;
        }
      }
LABEL_476:
      if ( v193 < 0 )
        goto LABEL_552;
      if ( !v912[1] || LODWORD(v912[0]) <= 6 )
        goto LABEL_2067;
      v291 = v912[1];
      v996 = v912[1];
      do
      {
        v193 = RtlULongLongAdd(v291, 4uLL, &v996);
        if ( v193 < 0 )
          goto LABEL_2039;
        v193 = RtlULongLongAdd(v996, v292, &v996);
        if ( v193 < 0 )
          goto LABEL_2039;
        v291 = v996;
      }
      while ( (unsigned int)(v293 + 1) < 6 );
      v193 = RtlULongLongAdd(v996, 4uLL, &v996);
      if ( v193 < 0 )
      {
LABEL_2039:
        v294 = v1187;
      }
      else
      {
        v295 = v996;
        v1187 = v294;
        if ( !v294 )
          v295 = 0LL;
        v1259 = v295;
      }
      if ( v193 < 0 )
        goto LABEL_552;
      if ( LODWORD(v912[0]) <= 7 )
      {
        v193 = -1073741811;
      }
      else
      {
        v296 = v912[1];
        v998 = v912[1];
        do
        {
          v193 = RtlULongLongAdd(v296, 4uLL, &v998);
          if ( v193 < 0 )
            goto LABEL_2042;
          v193 = RtlULongLongAdd(v998, v297, &v998);
          if ( v193 < 0 )
            goto LABEL_2042;
          v296 = v998;
        }
        while ( (unsigned int)(v298 + 1) < 7 );
        v193 = RtlULongLongAdd(v998, 4uLL, &v998);
        if ( v193 < 0 )
        {
LABEL_2042:
          v299 = v1133;
          v300 = v1294;
        }
        else
        {
          v1133 = v299;
          if ( v299 )
            v300 = (_DWORD *)v998;
          else
            v300 = 0LL;
          v1294 = v300;
        }
        if ( v193 < 0 )
          goto LABEL_552;
        if ( v299 != 4 )
        {
          v193 = -1073741789;
          goto LABEL_552;
        }
        v1218 = *v300;
      }
      if ( v193 < 0 )
        goto LABEL_552;
      if ( qword_1406FB3B0 )
        v301 = qword_1406FB3B0(v1135, v1099, v1259, v294, v1218, &v1371);
      else
        v301 = -1073700223;
      v302 = RtlUIntAdd(4u, 4u, &v1189);
      v193 = v302;
      if ( v302 < 0 )
      {
        v304 = v1097;
      }
      else
      {
        v304 = v1189;
        v1097 = v1189;
      }
      if ( v302 >= 0 )
      {
        v936 = v304;
        v193 = RtlUIntAdd(v303, 8u, &uAddend);
        if ( v193 >= 0 )
        {
          v1097 = uAddend;
          v193 = RtlUIntAdd(v305, uAddend, &v936);
          if ( v193 >= 0 )
            v931 = v936;
        }
      }
      if ( v193 < 0 )
        goto LABEL_552;
      v306 = RtlUIntAdd(4u, 0x10u, &v1231);
      v193 = v306;
      if ( v306 < 0 )
      {
        v308 = v956;
      }
      else
      {
        v308 = v1231;
        v956 = v1231;
      }
      if ( v306 < 0 )
        goto LABEL_552;
      v193 = RtlUIntAdd(v307, v308, &v931);
      if ( v193 < 0 )
        goto LABEL_552;
      v1020[0] = 8;
      v193 = RtlUIntAdd(8u, v931, v1020);
      if ( v193 < 0 )
      {
LABEL_525:
        if ( v193 < 0 )
          goto LABEL_552;
        *(_DWORD *)Size = v309;
        if ( !(_DWORD)v309 )
        {
          v193 = -1073741762;
          goto LABEL_552;
        }
        v313 = ExAllocatePoolWithTag(PagedPool, v309, 0x20534C53u);
        if ( !v313 )
        {
          v193 = -1073741801;
          goto LABEL_552;
        }
        *(_QWORD *)&Size[4] = v313;
        v314 = 0;
        v905 = 0;
        v1021 = v301 | 0x10000000;
        if ( &v1021 )
        {
          v193 = RtlULongLongAdd((ULONGLONG)v313, 4uLL, v1340);
          if ( v193 >= 0 )
          {
            if ( v316 + 2 > (_DWORD *)((char *)v316 + *(unsigned int *)Size) )
            {
              v193 = -1073741789;
              goto LABEL_552;
            }
            v317 = (int *)v1340[0];
            *v316 = v315;
            *v317 = v1021;
            v314 = ++v905;
          }
        }
        else
        {
          v193 = -1073741811;
        }
        if ( v193 < 0 )
          goto LABEL_552;
        v1261 = v1269;
        if ( &v1261 )
        {
          if ( *(_QWORD *)&Size[4] )
          {
            v318 = *(UINT **)&Size[4];
            v1104 = *(_QWORD *)&Size[4];
            if ( v314 )
            {
              while ( 1 )
              {
                v193 = RtlUIntAdd(4u, *v318, &v1141);
                if ( v193 < 0 )
                  break;
                v1014 = v1141;
                v193 = RtlULongLongAdd(v319, v1141, &v1104);
                if ( v193 < 0 )
                  break;
                v318 = (UINT *)v1104;
                if ( v320 + 1 >= v314 )
                  goto LABEL_539;
              }
            }
            else
            {
LABEL_539:
              v193 = RtlULongLongAdd((ULONGLONG)v318, 4uLL, v1342);
              if ( v193 >= 0 )
              {
                if ( (unsigned __int64)(v321 + 3) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
                {
                  v193 = -1073741789;
                  goto LABEL_552;
                }
                v322 = (_QWORD *)v1342[0];
                *v321 = 8;
                *v322 = v1261;
                v314 = ++v905;
              }
            }
          }
          else
          {
            v842 = RtlUIntAdd(4u, 8u, &v1191);
            v843 = v1014;
            v193 = v842;
            if ( v842 >= 0 )
              v843 = v1191;
            v1014 = v843;
            if ( v842 >= 0 )
            {
              v844 = RtlUIntAdd(*(UINT *)Size, v843, (UINT *)Size);
              v314 = v905;
              v193 = v844;
              if ( v844 >= 0 )
              {
                v314 = ++v905;
LABEL_543:
                if ( &v1371 )
                {
                  if ( *(_QWORD *)&Size[4] )
                  {
                    v323 = *(UINT **)&Size[4];
                    v1105 = *(_QWORD *)&Size[4];
                    if ( v314 )
                    {
                      while ( 1 )
                      {
                        v193 = RtlUIntAdd(4u, *v323, &v1143);
                        if ( v193 < 0 )
                          break;
                        v1016 = v1143;
                        v193 = RtlULongLongAdd(v324, v1143, &v1105);
                        if ( v193 < 0 )
                          break;
                        v323 = (UINT *)v1105;
                        if ( v326 + 1 >= v325 )
                          goto LABEL_549;
                      }
                    }
                    else
                    {
LABEL_549:
                      v193 = RtlULongLongAdd((ULONGLONG)v323, 4uLL, v1344);
                      if ( v193 >= 0 )
                      {
                        if ( (unsigned __int64)(v327 + 5) > *(_QWORD *)&Size[4]
                                                          + (unsigned __int64)*(unsigned int *)Size )
                        {
                          v193 = -1073741789;
                        }
                        else
                        {
                          v328 = (_OWORD *)v1344[0];
                          *v327 = 16;
                          *v328 = v1371;
                          ++v905;
                        }
                      }
                    }
                  }
                  else
                  {
                    v845 = RtlUIntAdd(4u, 0x10u, &v1220);
                    v846 = v1016;
                    v193 = v845;
                    if ( v845 >= 0 )
                      v846 = v1220;
                    v1016 = v846;
                    if ( v845 >= 0 )
                    {
                      v193 = RtlUIntAdd(*(UINT *)Size, v846, (UINT *)Size);
                      if ( v193 >= 0 )
                      {
                        ++v905;
                        v193 = 0;
                      }
                    }
                  }
                  goto LABEL_552;
                }
LABEL_2067:
                v193 = -1073741811;
LABEL_552:
                if ( v1099 )
                {
                  ExFreePoolWithTag(v1099, 0x20534C53u);
                  v1099 = 0LL;
                }
                goto LABEL_554;
              }
            }
          }
        }
        else
        {
          v193 = -1073741811;
        }
        if ( v193 < 0 )
          goto LABEL_552;
        goto LABEL_543;
      }
      v310 = (v1020[0] + 7) & 0xFFFFFFF8;
      if ( v310 < v1020[0] )
      {
        v193 = -1073741675;
      }
      else
      {
        v1061 = (v1020[0] + 7) & 0xFFFFFFF8;
        v193 = RtlUIntAdd(v310, 8u, &v1061);
        if ( v193 >= 0 )
        {
          v311 = v1061;
LABEL_518:
          if ( v193 < 0 )
            goto LABEL_552;
          v927 = 4;
          v193 = RtlUIntAdd(4u, v311, &v927);
          if ( v193 >= 0 )
          {
            v193 = RtlUIntAdd(v927, v312, &v927);
            if ( v193 >= 0 )
            {
              v193 = RtlUIntAdd(v927, v9[4], &v927);
              if ( v193 >= 0 )
              {
                v193 = RtlUIntAdd(v927, 4u, &v927);
                if ( v193 >= 0 )
                {
                  v193 = RtlUIntAdd(v927, v9[8], &v927);
                  if ( v193 >= 0 )
                    v1271[3] = v927;
                }
              }
            }
          }
          goto LABEL_525;
        }
      }
      v311 = v956;
      goto LABEL_518;
    case 110:
      v847 = sub_14067A85C(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v847;
      if ( v847 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 111:
      v850 = sub_140679C08(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v850;
      if ( v850 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 112:
      v854 = sub_140679E80(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v854;
      if ( v854 >= 0 )
        goto LABEL_326;
      goto LABEL_416;
    case 113:
      v329 = sub_1404B6C58(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v329;
      if ( v329 >= 0 )
        goto LABEL_326;
      v8 = (unsigned __int64)v910;
      v7 = (UINT *)v909;
      v5 = v910;
      goto LABEL_387;
    case 204:
      v855 = sub_14067C528(v912, v9, v106, &v905);
      v6 = (unsigned int *)v907;
      v193 = v855;
      if ( v855 < 0 )
        goto LABEL_416;
      goto LABEL_326;
    case 205:
      v330 = sub_1403B4904((__int64)v912, (__int64)v9, v106, (__int64)&v905);
      v6 = (unsigned int *)v907;
      v193 = v330;
      if ( v330 >= 0 )
        goto LABEL_326;
      v8 = (unsigned __int64)v910;
      v7 = (UINT *)v909;
      v5 = v910;
      goto LABEL_387;
    case 206:
      v1129 = 0;
      v1255[1] = 0;
      v1255[0] = 8;
      v193 = 0;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, v1255, 8u, &v1129);
      v6 = (unsigned int *)v907;
      if ( *((_DWORD *)v907 + 4) != 160
        || (memcmp(qword_1406A4CF0, *((const void **)v907 + 3), 0xA0uLL)
         || v9[4] != 160
         || memcmp(qword_1406A50B0, *((const void **)v9 + 3), 0xA0uLL)
         || *((_DWORD *)v907 + 8) != 8
         || **((_QWORD **)v907 + 5) != 0x5638EBB72F3355A5LL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x9F2DD8784FE939B7uLL)
        && (memcmp(qword_1406A4F70, *((const void **)v907 + 3), 0xA0uLL)
         || v9[4] != 160
         || memcmp(qword_1406A51F0, *((const void **)v9 + 3), 0xA0uLL)
         || *((_DWORD *)v907 + 8) != 8
         || **((_QWORD **)v907 + 5) != 0xF10D668DB2BB8BB9uLL
         || v9[8] != 8
         || **((_QWORD **)v9 + 5) != 0x768DFD321621EA95LL) )
      {
        v193 = -2147024891;
      }
      if ( v193 >= 0 )
      {
        v193 = sub_140218D28((__int64)v912, (__int64)v9, v841, (__int64)&v905);
        if ( v193 >= 0 )
          goto LABEL_326;
      }
      goto LABEL_416;
    default:
      v1082 = -2147467263;
      if ( !&v1082 )
      {
        v193 = -1073741811;
        goto LABEL_2104;
      }
      if ( *(_QWORD *)&Size[4] )
      {
        v858 = *(UINT **)&Size[4];
        v1085 = *(_QWORD *)&Size[4];
        if ( v905 )
        {
          do
          {
            v859 = RtlUIntAdd(4u, *v858, &v944);
            v193 = v859;
            if ( v859 >= 0 )
              v861 = v944;
            v1018 = v861;
            if ( v859 < 0 )
              goto LABEL_2104;
            v193 = RtlULongLongAdd(v860, v861, &v1085);
            if ( v193 < 0 )
              goto LABEL_2104;
            v858 = (UINT *)v1085;
          }
          while ( v862 + 1 < v905 );
        }
        v193 = RtlULongLongAdd((ULONGLONG)v858, 4uLL, v1346);
        if ( v193 >= 0 )
        {
          if ( (unsigned __int64)(v864 + 2) > *(_QWORD *)&Size[4] + (unsigned __int64)*(unsigned int *)Size )
          {
            v193 = -1073741789;
            goto LABEL_1205;
          }
          v865 = (int *)v1346[0];
          *v864 = v863;
          *v865 = v1082;
          ++v905;
        }
      }
      else
      {
        v856 = RtlUIntAdd(4u, 4u, &v1193);
        v857 = v1018;
        v193 = v856;
        if ( v856 >= 0 )
          v857 = v1193;
        v1018 = v857;
        if ( v856 >= 0 )
        {
          v193 = RtlUIntAdd(*(UINT *)Size, v857, (UINT *)Size);
          if ( v193 >= 0 )
          {
            ++v905;
            goto LABEL_2105;
          }
        }
      }
LABEL_2104:
      if ( v193 < 0 )
        goto LABEL_777;
LABEL_2105:
      if ( !*(_DWORD *)Size )
      {
        v193 = -1073741762;
        goto LABEL_1205;
      }
      v866 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)Size, 0x20534C53u);
      if ( !v866 )
      {
        v193 = -1073741801;
        goto LABEL_1205;
      }
      *(_QWORD *)&Size[4] = v866;
      v905 = 0;
      v1023 = -2147467263;
      if ( !&v1023 )
        goto LABEL_1607;
      v193 = RtlULongLongAdd((ULONGLONG)v866, 4uLL, v1348);
      if ( v193 >= 0 )
      {
        if ( v868 + 2 <= (_DWORD *)((char *)v868 + *(unsigned int *)Size) )
        {
          v869 = (int *)v1348[0];
          *v868 = v867;
          *v869 = v1023;
          ++v905;
        }
        else
        {
          v193 = -1073741789;
        }
      }
      goto LABEL_1205;
  }
}
